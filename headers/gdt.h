#ifndef __GDT_H
#define __GDT_H
#include <types.h>

typedef struct __attribute__((packed)) {
    uint16_t limit_low;   
	uint16_t base_low;    
	uint8_t base_middle; 
	uint8_t access;      
	uint8_t granularity; 
	uint8_t base_high;
} Memory_Segment;

typedef struct __attribute__((packed)) {
    uint16_t gdt_size;
    uint32_t gdt_pointer;
} GDT_Register;

void fill_gdt(Memory_Segment* gdt);
void load_gdt();

#endif
