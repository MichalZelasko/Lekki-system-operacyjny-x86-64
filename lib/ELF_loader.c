#include <ctype.h>
#include <stdio.h>
#include <stdint.h>

#define EI_IDENT 64 * 1024 * 1024

enum {
  PT_NULL,
  PT_LOAD,
  PT_DYNAMIC,
  PT_INTERP,
  PT_NOTE,
  PT_SHLIB,
  PT_PHDR,
  PT_LOPROC=0x70000000,
  PT_HIPROC=0x7FFFFFFF
};

typedef struct ElfHeader{
    unsigned char e_ident[EI_IDENT];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint32_t e_entry;
    uint32_t e_phoff; //pointer at the start of headers array
    uint32_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum; //number of headers
    uint16_t e_shentsize; //headers size
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} ElfHeader;
 
typedef struct ElfProgramHeader {
    uint32_t p_type;
    uint32_t p_offset;
    uint32_t p_vaddr;
    uint32_t p_paddr;
    uint32_t p_filesz;
    uint32_t p_memsz;
    uint32_t p_flags;
    uint32_t p_align;
} ElfProgramHeader;

ElfHeader header;
ElfProgramHeader ph;
uintptr_t base = UINTPTR_MAX;

int loadBinaryELF(unsigned char *elfimage) {
    int i;
    memcpy(&header, elfimage, sizeof(header));

    if(strcmp(header.e_ident, "\X7fELF")) {
       printf("error!\n");
       return -1;
    }

    for(i = 0; i < header.e_phnum; i++) {
        memcpy(elfimage + header.e_phoff + header.e_phentsize * i, &ph, sizeof(ph));
        if(base > ph.p_vaddr) {
            base = ph.p_vaddr;
        } 
    }
 
    return 0;
}

int findSize(unsigned char *elfimage) {
    uintptr_t size = 0;
    uintptr_t segment_end;
 
    for(int i=0; i < header.e_phnum; i++) {
        memcpy(elfimage + header.e_phoff + header.e_phentsize * i, &ph, sizeof(ph));
        segment_end = ph.p_vaddr - base + ph.p_memsz;
        if(size < segment_end) {
            size = segment_end;
        }
    }

    return size;
}

int loadHeader(unsigned char *elfimage, uintptr_t size) {
    unsigned char *finalimage = kmalloc(size);
    unsigned char *finalimage = (unsigned char*) base;
    uintptr_t addr;
 
    for(int i = 0; i < header.e_phnum; i++) {    
        memcpy(elfimage + header.e_phoff + header.e_phentsize * i, &ph, sizeof(ph));
        addr = (ph.p_vaddr - base) + (uintptr_t)finalimage;
        memset(finalimage + addr, 0, ph.p_memsz);
        memcpy(finalimage + addr, elfimage + ph.p_offset, ph.p_filesz);
    }

    return 0;
}