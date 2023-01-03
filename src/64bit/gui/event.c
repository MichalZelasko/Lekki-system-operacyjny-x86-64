#include <event.h>
#include <types.h>

void event_init(Event* event, uint32_t mouse_x, uint32_t mouse_y) {
    event->mouse_x = mouse_x;
    event->mouse_y = mouse_y;
    event->target = 0;
    event->is_bubbling = 0;
    event->is_captured = 0;
}

void event_stop_propagation(Event* event) {
    event->is_bubbling = 0;
}
