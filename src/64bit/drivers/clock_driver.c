#include <types.h>
#include <graphics_mode.h>

static uint64_t ticks_counter = 0;
uint8_t should_rerender = 0;

uint64_t get_clock_ticks() {
    return ticks_counter;
}


void handle_clock_interrupt() {
    ticks_counter++;
    should_rerender = 1;
}
