#ifndef EVENT_H
#define EVENT_H
#include <types.h>

typedef struct {
    uint32_t mouse_x;
    uint32_t mouse_y;
    uint8_t is_bubbling;
    uint8_t is_captured;
    void* target;
} Event;

void event_init(Event* event, uint32_t mouse_x, uint32_t mouse_y);
void event_stop_propagation(Event* event);

#endif
