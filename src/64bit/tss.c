#include <tss.h>
#include <types.h>

extern char interrupt_stack; // assembly label

void fill_tss() {
    tss* tss_ptr = (tss*)0;
    tss_ptr->reserved = 0;
    tss_ptr->reserved2 = 0;
    tss_ptr->reserved3 = 0;
    tss_ptr->reserved4 = 0;
    tss_ptr->rsp0 = 0;
    tss_ptr->rsp1 = 0;
    tss_ptr->rsp2 = 0;
    tss_ptr->ist1 = (uint64_t) &interrupt_stack;
    tss_ptr->ist2 = (uint64_t) &interrupt_stack;
    tss_ptr->ist3 = (uint64_t) &interrupt_stack;
    tss_ptr->ist4 = (uint64_t) &interrupt_stack;
    tss_ptr->ist5 = (uint64_t) &interrupt_stack;
    tss_ptr->ist6 = (uint64_t) &interrupt_stack;
    tss_ptr->ist7 = (uint64_t) &interrupt_stack;
    tss_ptr->io_map_base_address = 0;
}
