#ifndef CLOCK_DRIVER_H
#define CLOCK_DRIVER_H

uint64_t get_clock_ticks();
void handle_clock_interrupt();
uint8_t should_rerender;

#endif