#include <interrupts.h>
#include <types.h>
#include <gdt.h>
#include <port.h>
#include <interrupt_handlers.h>
#include <utils.h>
#include <mouse_driver.h>
#include <keyboard_driver.h>
#include <clock_driver.h>
#define HardwareInterruptOffset 0x20

static void set_idt_entry(
    InterruptDescriptor64* idt,
    uint8_t interrupt_number,
    uint16_t code_segment,
    void (*handler)()
) {
    idt[interrupt_number].ist = 1;  // interrupt stack in tss
    idt[interrupt_number].zero = 0;
    idt[interrupt_number].offset_1 = ((uint64_t) handler) & 0xFFFF;
    idt[interrupt_number].offset_2 = (((uint64_t) handler) >> 16) & 0xFFFF;
    idt[interrupt_number].offset_3 = (((uint64_t) handler) >> 32) & 0xFFFFFFFF;
    idt[interrupt_number].selector = code_segment;
    idt[interrupt_number].type_attributes = 0x8E;
};

void fill_idt(InterruptDescriptor64* idt, uint16_t code_segment) {
    
    for(uint16_t i = 0; i < 256; i++) {
        set_idt_entry(idt, i, code_segment, &ignore_interrupt);
    }
    set_idt_entry(idt, 0, code_segment, &handle_exception0x00);
    set_idt_entry(idt, 1, code_segment, &handle_exception0x01);
    set_idt_entry(idt, 2, code_segment, &handle_exception0x02);
    set_idt_entry(idt, 3, code_segment, &handle_exception0x03);
    set_idt_entry(idt, 4, code_segment, &handle_exception0x04);
    set_idt_entry(idt, 5, code_segment, &handle_exception0x05);
    set_idt_entry(idt, 6, code_segment, &handle_exception0x06);
    set_idt_entry(idt, 7, code_segment, &handle_exception0x07);
    set_idt_entry(idt, 8, code_segment, &handle_exception0x08);
    set_idt_entry(idt, 9, code_segment, &handle_exception0x09);
    set_idt_entry(idt, 10, code_segment, &handle_exception0x0A);
    set_idt_entry(idt, 11, code_segment, &handle_exception0x0B);
    set_idt_entry(idt, 12, code_segment, &handle_exception0x0C);
    set_idt_entry(idt, 13, code_segment, &handle_exception0x0D);
    set_idt_entry(idt, 14, code_segment, &handle_exception0x0E);
    set_idt_entry(idt, 15, code_segment, &handle_exception0x0F);
    set_idt_entry(idt, 16, code_segment, &handle_exception0x10);
    set_idt_entry(idt, 17, code_segment, &handle_exception0x11);
    set_idt_entry(idt, 18, code_segment, &handle_exception0x12);
    set_idt_entry(idt, 19, code_segment, &handle_exception0x13);
    set_idt_entry(idt, 20, code_segment, &handle_exception0x14);
    set_idt_entry(idt, 21, code_segment, &handle_exception0x15);
    set_idt_entry(idt, 22, code_segment, &handle_exception0x16);
    set_idt_entry(idt, 23, code_segment, &handle_exception0x17);
    set_idt_entry(idt, 24, code_segment, &handle_exception0x18);
    set_idt_entry(idt, 25, code_segment, &handle_exception0x19);
    set_idt_entry(idt, 26, code_segment, &handle_exception0x1A);
    set_idt_entry(idt, 27, code_segment, &handle_exception0x1B);
    set_idt_entry(idt, 28, code_segment, &handle_exception0x1C);
    set_idt_entry(idt, 29, code_segment, &handle_exception0x1D);
    set_idt_entry(idt, 30, code_segment, &handle_exception0x1E);
    set_idt_entry(idt, 31, code_segment, &handle_exception0x1F);

    set_idt_entry(idt, HardwareInterruptOffset + 0, code_segment, &handle_interrupt0x00);
    set_idt_entry(idt, HardwareInterruptOffset + 1, code_segment, &handle_interrupt0x01);
    set_idt_entry(idt, HardwareInterruptOffset + 2, code_segment, &handle_interrupt0x02);
    set_idt_entry(idt, HardwareInterruptOffset + 3, code_segment, &handle_interrupt0x03);
    set_idt_entry(idt, HardwareInterruptOffset + 4, code_segment, &handle_interrupt0x04);
    set_idt_entry(idt, HardwareInterruptOffset + 5, code_segment, &handle_interrupt0x05);
    set_idt_entry(idt, HardwareInterruptOffset + 6, code_segment, &handle_interrupt0x06);
    set_idt_entry(idt, HardwareInterruptOffset + 7, code_segment, &handle_interrupt0x07);
    set_idt_entry(idt, HardwareInterruptOffset + 8, code_segment, &handle_interrupt0x08);
    set_idt_entry(idt, HardwareInterruptOffset + 9, code_segment, &handle_interrupt0x09);
    set_idt_entry(idt, HardwareInterruptOffset + 10, code_segment, &handle_interrupt0x0A);
    set_idt_entry(idt, HardwareInterruptOffset + 11, code_segment, &handle_interrupt0x0B);
    set_idt_entry(idt, HardwareInterruptOffset + 12, code_segment, &handle_interrupt0x0C);
    set_idt_entry(idt, HardwareInterruptOffset + 13, code_segment, &handle_interrupt0x0D);
    set_idt_entry(idt, HardwareInterruptOffset + 14, code_segment, &handle_interrupt0x0E);
    set_idt_entry(idt, HardwareInterruptOffset + 15, code_segment, &handle_interrupt0x0F);

    set_idt_entry(idt, HardwareInterruptOffset + 16, code_segment, &handle_interrupt0x10);
    set_idt_entry(idt, HardwareInterruptOffset + 17, code_segment, &handle_interrupt0x11);
    set_idt_entry(idt, HardwareInterruptOffset + 18, code_segment, &handle_interrupt0x12);
    set_idt_entry(idt, HardwareInterruptOffset + 19, code_segment, &handle_interrupt0x13);
    set_idt_entry(idt, HardwareInterruptOffset + 20, code_segment, &handle_interrupt0x14);
    set_idt_entry(idt, HardwareInterruptOffset + 21, code_segment, &handle_interrupt0x15);
    set_idt_entry(idt, HardwareInterruptOffset + 22, code_segment, &handle_interrupt0x16);
    set_idt_entry(idt, HardwareInterruptOffset + 23, code_segment, &handle_interrupt0x17);
    set_idt_entry(idt, HardwareInterruptOffset + 24, code_segment, &handle_interrupt0x18);
    set_idt_entry(idt, HardwareInterruptOffset + 25, code_segment, &handle_interrupt0x19);
    set_idt_entry(idt, HardwareInterruptOffset + 26, code_segment, &handle_interrupt0x1A);
    set_idt_entry(idt, HardwareInterruptOffset + 27, code_segment, &handle_interrupt0x1B);
    set_idt_entry(idt, HardwareInterruptOffset + 28, code_segment, &handle_interrupt0x1C);
    set_idt_entry(idt, HardwareInterruptOffset + 29, code_segment, &handle_interrupt0x1D);
    set_idt_entry(idt, HardwareInterruptOffset + 30, code_segment, &handle_interrupt0x1E);
    set_idt_entry(idt, HardwareInterruptOffset + 31, code_segment, &handle_interrupt0x1F);

    set_idt_entry(idt, HardwareInterruptOffset + 32, code_segment, &handle_interrupt0x20);
    set_idt_entry(idt, HardwareInterruptOffset + 33, code_segment, &handle_interrupt0x21);
    set_idt_entry(idt, HardwareInterruptOffset + 34, code_segment, &handle_interrupt0x22);
    set_idt_entry(idt, HardwareInterruptOffset + 35, code_segment, &handle_interrupt0x23);
    set_idt_entry(idt, HardwareInterruptOffset + 36, code_segment, &handle_interrupt0x24);
    set_idt_entry(idt, HardwareInterruptOffset + 37, code_segment, &handle_interrupt0x25);
    set_idt_entry(idt, HardwareInterruptOffset + 38, code_segment, &handle_interrupt0x26);
    set_idt_entry(idt, HardwareInterruptOffset + 39, code_segment, &handle_interrupt0x27);
    set_idt_entry(idt, HardwareInterruptOffset + 40, code_segment, &handle_interrupt0x28);
    set_idt_entry(idt, HardwareInterruptOffset + 41, code_segment, &handle_interrupt0x29);
    set_idt_entry(idt, HardwareInterruptOffset + 42, code_segment, &handle_interrupt0x2A);
    set_idt_entry(idt, HardwareInterruptOffset + 43, code_segment, &handle_interrupt0x2B);
    set_idt_entry(idt, HardwareInterruptOffset + 44, code_segment, &handle_interrupt0x2C);
    set_idt_entry(idt, HardwareInterruptOffset + 45, code_segment, &handle_interrupt0x2D);
    set_idt_entry(idt, HardwareInterruptOffset + 46, code_segment, &handle_interrupt0x2E);
    set_idt_entry(idt, HardwareInterruptOffset + 47, code_segment, &handle_interrupt0x2F);

    set_idt_entry(idt, HardwareInterruptOffset + 48, code_segment, &handle_interrupt0x30);
    set_idt_entry(idt, HardwareInterruptOffset + 49, code_segment, &handle_interrupt0x31);
    set_idt_entry(idt, HardwareInterruptOffset + 50, code_segment, &handle_interrupt0x32);
    set_idt_entry(idt, HardwareInterruptOffset + 51, code_segment, &handle_interrupt0x33);
    set_idt_entry(idt, HardwareInterruptOffset + 52, code_segment, &handle_interrupt0x34);
    set_idt_entry(idt, HardwareInterruptOffset + 53, code_segment, &handle_interrupt0x35);
    set_idt_entry(idt, HardwareInterruptOffset + 54, code_segment, &handle_interrupt0x36);
    set_idt_entry(idt, HardwareInterruptOffset + 55, code_segment, &handle_interrupt0x37);
    set_idt_entry(idt, HardwareInterruptOffset + 56, code_segment, &handle_interrupt0x38);
    set_idt_entry(idt, HardwareInterruptOffset + 57, code_segment, &handle_interrupt0x39);
    set_idt_entry(idt, HardwareInterruptOffset + 58, code_segment, &handle_interrupt0x3A);
    set_idt_entry(idt, HardwareInterruptOffset + 59, code_segment, &handle_interrupt0x3B);
    set_idt_entry(idt, HardwareInterruptOffset + 60, code_segment, &handle_interrupt0x3C);
    set_idt_entry(idt, HardwareInterruptOffset + 61, code_segment, &handle_interrupt0x3D);
    set_idt_entry(idt, HardwareInterruptOffset + 62, code_segment, &handle_interrupt0x3E);
    set_idt_entry(idt, HardwareInterruptOffset + 63, code_segment, &handle_interrupt0x3F);

    set_idt_entry(idt, HardwareInterruptOffset + 64, code_segment, &handle_interrupt0x40);
    set_idt_entry(idt, HardwareInterruptOffset + 65, code_segment, &handle_interrupt0x41);
    set_idt_entry(idt, HardwareInterruptOffset + 66, code_segment, &handle_interrupt0x42);
    set_idt_entry(idt, HardwareInterruptOffset + 67, code_segment, &handle_interrupt0x43);
    set_idt_entry(idt, HardwareInterruptOffset + 68, code_segment, &handle_interrupt0x44);
    set_idt_entry(idt, HardwareInterruptOffset + 69, code_segment, &handle_interrupt0x45);
    set_idt_entry(idt, HardwareInterruptOffset + 70, code_segment, &handle_interrupt0x46);
    set_idt_entry(idt, HardwareInterruptOffset + 71, code_segment, &handle_interrupt0x47);
    set_idt_entry(idt, HardwareInterruptOffset + 72, code_segment, &handle_interrupt0x48);
    set_idt_entry(idt, HardwareInterruptOffset + 73, code_segment, &handle_interrupt0x49);
    set_idt_entry(idt, HardwareInterruptOffset + 74, code_segment, &handle_interrupt0x4A);
    set_idt_entry(idt, HardwareInterruptOffset + 75, code_segment, &handle_interrupt0x4B);
    set_idt_entry(idt, HardwareInterruptOffset + 76, code_segment, &handle_interrupt0x4C);
    set_idt_entry(idt, HardwareInterruptOffset + 77, code_segment, &handle_interrupt0x4D);
    set_idt_entry(idt, HardwareInterruptOffset + 78, code_segment, &handle_interrupt0x4E);
    set_idt_entry(idt, HardwareInterruptOffset + 79, code_segment, &handle_interrupt0x4F);

    set_idt_entry(idt, HardwareInterruptOffset + 80, code_segment, &handle_interrupt0x50);
    set_idt_entry(idt, HardwareInterruptOffset + 81, code_segment, &handle_interrupt0x51);
    set_idt_entry(idt, HardwareInterruptOffset + 82, code_segment, &handle_interrupt0x52);
    set_idt_entry(idt, HardwareInterruptOffset + 83, code_segment, &handle_interrupt0x53);
    set_idt_entry(idt, HardwareInterruptOffset + 84, code_segment, &handle_interrupt0x54);
    set_idt_entry(idt, HardwareInterruptOffset + 85, code_segment, &handle_interrupt0x55);
    set_idt_entry(idt, HardwareInterruptOffset + 86, code_segment, &handle_interrupt0x56);
    set_idt_entry(idt, HardwareInterruptOffset + 87, code_segment, &handle_interrupt0x57);
    set_idt_entry(idt, HardwareInterruptOffset + 88, code_segment, &handle_interrupt0x58);
    set_idt_entry(idt, HardwareInterruptOffset + 89, code_segment, &handle_interrupt0x59);
    set_idt_entry(idt, HardwareInterruptOffset + 90, code_segment, &handle_interrupt0x5A);
    set_idt_entry(idt, HardwareInterruptOffset + 91, code_segment, &handle_interrupt0x5B);
    set_idt_entry(idt, HardwareInterruptOffset + 92, code_segment, &handle_interrupt0x5C);
    set_idt_entry(idt, HardwareInterruptOffset + 93, code_segment, &handle_interrupt0x5D);
    set_idt_entry(idt, HardwareInterruptOffset + 94, code_segment, &handle_interrupt0x5E);
    set_idt_entry(idt, HardwareInterruptOffset + 95, code_segment, &handle_interrupt0x5F);

    set_idt_entry(idt, HardwareInterruptOffset + 96, code_segment, &handle_interrupt0x60);
    set_idt_entry(idt, HardwareInterruptOffset + 97, code_segment, &handle_interrupt0x61);
    set_idt_entry(idt, HardwareInterruptOffset + 98, code_segment, &handle_interrupt0x62);
    set_idt_entry(idt, HardwareInterruptOffset + 99, code_segment, &handle_interrupt0x63);
    set_idt_entry(idt, HardwareInterruptOffset + 100, code_segment, &handle_interrupt0x64);
    set_idt_entry(idt, HardwareInterruptOffset + 101, code_segment, &handle_interrupt0x65);
    set_idt_entry(idt, HardwareInterruptOffset + 102, code_segment, &handle_interrupt0x66);
    set_idt_entry(idt, HardwareInterruptOffset + 103, code_segment, &handle_interrupt0x67);
    set_idt_entry(idt, HardwareInterruptOffset + 104, code_segment, &handle_interrupt0x68);
    set_idt_entry(idt, HardwareInterruptOffset + 105, code_segment, &handle_interrupt0x69);
    set_idt_entry(idt, HardwareInterruptOffset + 106, code_segment, &handle_interrupt0x6A);
    set_idt_entry(idt, HardwareInterruptOffset + 107, code_segment, &handle_interrupt0x6B);
    set_idt_entry(idt, HardwareInterruptOffset + 108, code_segment, &handle_interrupt0x6C);
    set_idt_entry(idt, HardwareInterruptOffset + 109, code_segment, &handle_interrupt0x6D);
    set_idt_entry(idt, HardwareInterruptOffset + 110, code_segment, &handle_interrupt0x6E);
    set_idt_entry(idt, HardwareInterruptOffset + 111, code_segment, &handle_interrupt0x6F);

    uint16_t pic_master_command_port = 0x20;
    uint16_t pic_master_data_port = 0x21;
    uint16_t pic_slave_command_port = 0xA0;
    uint16_t pic_slave_data_port = 0xA1;

    port_slow_write8(pic_master_command_port, 0x11);
    port_slow_write8(pic_slave_command_port, 0x11);

    //remap pic
    port_slow_write8(pic_master_data_port, HardwareInterruptOffset);
    port_slow_write8(pic_slave_data_port, HardwareInterruptOffset + 8);

    port_slow_write8(pic_master_data_port, 0x04);
    port_slow_write8(pic_slave_data_port, 0x02);

    port_slow_write8(pic_master_data_port, 0x01);
    port_slow_write8(pic_slave_data_port, 0x01);

    port_slow_write8(pic_master_data_port, 0x00);
    port_slow_write8(pic_slave_data_port, 0x00);

    IDT_Pointer idt_pointer;
    idt_pointer.size  = 256 * sizeof(InterruptDescriptor64) - 1;
    idt_pointer.base  = (uint64_t) idt;
    asm volatile("lidt %0" : : "m" (idt_pointer));
};

void activate_idt() {
    asm volatile("sti");
};

void* handle_interrupt_main(uint8_t interrupt_number, void* rsp) {
    uint16_t pic_master_command_port = 0x20;
    uint16_t pic_master_data_port = 0x21;
    uint16_t pic_slave_command_port = 0xA0;
    uint16_t pic_slave_data_port = 0xA1;

    if (interrupt_number == 0x20) {
        handle_clock_interrupt();
    }

    if (interrupt_number == 0x21) {
        handle_keyboard_interrupt();
    }

    if (interrupt_number == 0x2C) {
        handle_mouse_interrupt();
    }

    if (0x20 <= interrupt_number && interrupt_number < 0x30) {
        if (0x28 <= interrupt_number) {
            port_slow_write8(pic_slave_command_port, 0x20);
        }
        port_slow_write8(pic_master_command_port, 0x20);
    }
    if (interrupt_number != 0x20 && interrupt_number != 0x21 && interrupt_number != 0x2C) {
        printfHex16(interrupt_number);
        mprintf(" ");
    }
    return rsp;
};
