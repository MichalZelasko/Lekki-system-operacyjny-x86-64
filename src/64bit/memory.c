#include <types.h>
#include <graphics_mode.h>

typedef struct {
    void* start;
    size_m size;
    uint8_t is_available;
}  MemoryBlock;

MemoryBlock* memory_blocks;
size_m memory_blocks_size = 0;
size_m memory_blocks_max_size = 0;


extern char kernel_heap; // assembly label

void init_memory_blocks(void* boot_info) {
    memory_blocks = (void*) &kernel_heap;
    void* framebuffer_ptr = *((uint8_t**)(boot_info + 88));

    memory_blocks[0].is_available = 0;
    memory_blocks[0].start = (void*) &kernel_heap;
    memory_blocks[0].size = sizeof(MemoryBlock) * 8;

    memory_blocks[1].is_available = 1;
    memory_blocks[1].start = memory_blocks[0].start + memory_blocks[0].size;
    memory_blocks[1].size = framebuffer_ptr - memory_blocks[1].start;

    memory_blocks[2].is_available = 0;
    memory_blocks[2].start = framebuffer_ptr;
    memory_blocks[2].size = SCREEN_WIDTH * SCREEN_HEIGHT * PIXEL_BYTES;

    memory_blocks[3].is_available = 1;
    memory_blocks[3].start = memory_blocks[2].start + memory_blocks[2].size;
    memory_blocks[3].size =  8589934592 - (long)memory_blocks[3].start; // assume 8GB of RAM

    memory_blocks_size = 4;
    memory_blocks_max_size = 8;
}

void free(void* start) {
    for (uint32_t i = 0; i < memory_blocks_size; i++) {
        if (memory_blocks[i].start != start) {
            continue;
        }
        memory_blocks[i].is_available = 1;
        uint32_t merge_start = i;
        uint32_t merge_end = i;
        if (i != 0 && memory_blocks[i - 1].is_available) {
            merge_start = i - 1;
        }
        if (i != memory_blocks_size - 1 && memory_blocks[i + 1].is_available) {
            merge_end = i + 1;
        }
        if (merge_start == merge_end) {
            return;
        }
        memory_blocks[merge_start].size = memory_blocks[merge_end].start - memory_blocks[merge_start].start + memory_blocks[merge_end].size;
        uint32_t merge_size = merge_end - merge_start;
        for (uint32_t j = merge_start + 1; j < memory_blocks_size; j++) {
            memory_blocks[j] = memory_blocks[j + merge_size];
        }
        memory_blocks_size -= merge_size;
        return;
    }
}

static void insert_memory_block(MemoryBlock inserted, uint32_t index) {
    MemoryBlock copy;
    memory_blocks_size++;
    for (uint32_t i = index; i < memory_blocks_size; i++) {
        copy = memory_blocks[i];
        memory_blocks[i] = inserted;
        inserted = copy;
    }
}

static void resize_memory_blocks_list() {
    for (uint32_t i = 0; i < memory_blocks_size; i++) {
        if (!memory_blocks[i].is_available || memory_blocks[i].size <= sizeof(MemoryBlock) * memory_blocks_max_size * 2) {
            continue;
        }
        MemoryBlock* new_memory_blocks = memory_blocks[i].start;
        for (uint32_t j = 0; j < memory_blocks_size; j++) {
            new_memory_blocks[j] = memory_blocks[j];
        }
        free(memory_blocks);
        memory_blocks = new_memory_blocks;
        memory_blocks_max_size = 2 * memory_blocks_max_size;
        memory_blocks_size++;
        MemoryBlock inserted = {
            .is_available = 1,
            .size = memory_blocks[i].size - sizeof(MemoryBlock) * memory_blocks_max_size,
            .start = memory_blocks[i].start + sizeof(MemoryBlock) * memory_blocks_max_size,
        };
        memory_blocks[i].is_available = 0;
        memory_blocks[i].size = sizeof(MemoryBlock) * memory_blocks_max_size;
        insert_memory_block(inserted, i + 1);
        return;
    }
}

void* malloc(size_m size) {
    if (memory_blocks_size == memory_blocks_max_size) {
        resize_memory_blocks_list();
    }

    for (uint32_t i = 0; i < memory_blocks_size; i++) {
        if (!memory_blocks[i].is_available || memory_blocks[i].size <= size) {
            continue;
        }
        MemoryBlock inserted = {
            .is_available = 1,
            .start = memory_blocks[i].start + size,
            .size = memory_blocks[i].size - size,
        };
        memory_blocks[i].is_available = 0;
        memory_blocks[i].size = size;
        insert_memory_block(inserted, i + 1);
        return memory_blocks[i].start;
    }
    return 0;
}

void* memcpy(void *to, void *from, size_m n) {
    for (int i = 0; i < n / 16; i++) {
        __asm__ __volatile__ (
            "movups (%0), %%xmm0\n"
            "movntdq %%xmm0, (%1)\n"
            :
            :"r"(from), "r"(to) 
            : "memory"
        );
        from += 16;
        to += 16;
    }
    if (n % 16 >= 8) {
        *(uint64_t*) to = *(uint64_t*) from;
        from += 8;
        to += 8;
    }
    for (int i = 0; i < n % 8; i++) {
        *(uint8_t*) to = *(uint8_t*) from;
        from++;
        to++;
    }
    return to;
}

void* bitmask_memcpy(void* to, void* from, void* bitmask, size_m n) {
    for (int i = 0; i < n / 16; i++) {
        __asm__ __volatile__ (
            "movups (%2), %%xmm0\n" // load mask to register xmm0
            "movups (%2), %%xmm1\n" // load mask to register xmm1
            "pand (%0), %%xmm0\n"   // bitwise and mask and from
            "pandn (%1), %%xmm1\n"  // negate mask and and with to
            "por %%xmm1, %%xmm0\n"
            "movntdq %%xmm0, (%1)\n"
            :
            :"r"(from), "r"(to), "r"(bitmask)
            : "memory"
        );
        from += 16;
        to += 16;
        bitmask += 16;
    }
    if (n % 16 >= 8) {
        *(uint64_t*) to = (*(uint64_t*)to & (~*(uint64_t*)bitmask)) | (*(uint64_t*) from & *(uint64_t*)bitmask);
        from += 8;
        to += 8;
        bitmask += 8;
    }
    for (int i = 0; i < n % 8; i++) {
        *(uint8_t*) to = (*(uint8_t*)to & (~*(uint8_t*)bitmask)) | (*(uint8_t*) from & *(uint8_t*)bitmask);
        from++;
        to++;
        bitmask++;
    }
    return to;
}
