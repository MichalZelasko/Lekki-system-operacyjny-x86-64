#include <types.h>
#include <utils.h>
#include <interrupts.h>
#include <graphics_mode.h>
#include <clock_driver.h>
#include <mouse_driver.h>
#include <keyboard_driver.h>
#include <tss.h>
#include <memory.h>
#include <icons.h>
#include <windows.h>
#include <synchronized_queue.h>
//#include <executables.h>

//  64 bit calling convention: rdi, rsi, rdx, rcx, r8, r9.
static SynchronizedQueue* mouse_queue;
void activate_drivers();

int kernel_main(void* boot_info) {
    init_memory_blocks(boot_info);
    InterruptDescriptor64 idt[256];
    fill_idt(idt, 0x8);
    set_graphics_mode(boot_info);
    fill_tss();
    activate_drivers();
    activate_idt();

    //load_executable_handler();
    while (1) {
        if (should_rerender) {
            while (!synchronized_queue_is_empty(mouse_queue)) {
                MouseEvent* event = synchronized_queue_get(mouse_queue);
                handle_mouse_event(event);
            }
            render();
            should_rerender = 0;
        }
        asm __volatile__("hlt");
    }
}

void activate_drivers() {
    mouse_queue = synchronized_queue_create(sizeof(MouseEvent));
    activate_mouse(mouse_queue);
    activate_keyboard();
}
