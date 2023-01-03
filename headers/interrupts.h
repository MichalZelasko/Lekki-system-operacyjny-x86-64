#ifndef __INTERRUPTS_H
#define __INTERRUPTS_H
#include <types.h>

typedef struct __attribute__((packed))
{
    uint16_t handler_low;
    uint16_t code_segment;
    uint8_t reserved;
    uint8_t access;
    uint16_t handler_high;

} Gate_Descriptor;

typedef struct __attribute__((packed))
{
    uint16_t size;
    uint64_t base;
} IDT_Pointer;

typedef struct __attribute__((packed)) {
   uint16_t offset_1;        // offset bits 0..15
   uint16_t selector;        // a code segment selector in GDT or LDT
   uint8_t  ist;             // bits 0..2 holds Interrupt Stack Table offset, rest of bits zero.
   uint8_t  type_attributes; // gate type, dpl, and p fields
   uint16_t offset_2;        // offset bits 16..31
   uint32_t offset_3;        // offset bits 32..63
   uint32_t zero;            // reserved
} InterruptDescriptor64;


void fill_idt(InterruptDescriptor64* idt, uint16_t code_segment);

void activate_idt();

#endif