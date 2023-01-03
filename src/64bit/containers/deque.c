#include <deque.h>
#include <types.h>
#include <memory.h>

Deque* deque_create(size_m element_size) {
    Deque* created = malloc(sizeof(Deque));
    created->buffer = malloc(element_size * 8);
    created->buffer_end = created->buffer + element_size * 8;
    created->length = 0;
    created->left = created->buffer;
    created->right = created->buffer;
    created->element_size = element_size;
}

static void resize_deque(Deque* deque) {
    void* new_address = malloc(2 * deque->length * deque->element_size);
    memcpy(new_address, deque->left, deque->buffer_end - deque->left);
    memcpy(new_address + (deque->buffer_end - deque->left), deque->buffer, deque->left - deque->buffer);
    free(deque->buffer);
    deque->buffer = new_address;
    deque->buffer_end = new_address + deque->length * deque->element_size * 2;
    deque->left = new_address;
    deque->right = new_address + (deque->length - 1) * deque->element_size;
}

static inline void decrement_left(Deque* deque) {
    deque->left -= deque->element_size;
    if (deque->left < deque->buffer) {
        deque->left = deque->buffer_end - deque->element_size;
    } 
}

static inline void increment_left(Deque* deque) {
    deque->left += deque->element_size;
    if (deque->left == deque->buffer_end) {
        deque->left = deque->buffer;
    }
}

static inline void decrement_right(Deque* deque) {
    deque->right -= deque->element_size;
    if (deque->right < deque->buffer) {
        deque->right = deque->buffer_end - deque->element_size;
    } 
}

static inline void increment_right(Deque* deque) {
    deque->right += deque->element_size;
    if (deque->right == deque->buffer_end) {
        deque->right = deque->buffer;
    }
}

void deque_push_left(Deque* deque, void* element) {
    if (deque->length * deque->element_size == deque->buffer_end - deque->buffer) {
        resize_deque(deque);
    }
    if (deque->length > 0) {
        decrement_left(deque);
    }
    memcpy(deque->left, element, deque->element_size);
    deque->length++;
}

void deque_push_right(Deque* deque, void* element) {
    if (deque->length * deque->element_size == deque->buffer_end - deque->buffer) {
        resize_deque(deque);
    }
    if (deque->length > 0) {
        increment_right(deque);
    }
    memcpy(deque->right, element, deque->element_size);
    deque->length++;
}

void* deque_peek_left(Deque* deque) {
    return deque->left;
}

void* deque_peek_right(Deque* deque) {
    return deque->right;
}

void* deque_pop_left(Deque* deque) {
    deque->length--;
    void* result = deque->left;
    if (deque->length > 0) {
        increment_left(deque);
    }
    return result;
}

void* deque_pop_right(Deque* deque) {
    deque->length--;
    void* result = deque->right;
    if (deque->length > 0) {
        decrement_right(deque);
    }
    return result;
}

void deque_destory(Deque* deque) {
    free(deque->buffer);
    free(deque);
}

uint8_t deque_is_empty(Deque* deque) {
    return deque->length == 0;
}
