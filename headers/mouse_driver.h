#ifndef MOUSE_DRIVER_H
#define MOUSE_DRIVER_H
#include <types.h> 
#include <synchronized_queue.h>

typedef enum {
    MouseDrag, MouseLeftClick, MouseRightClick, MouseLeftRelease, MouseRightRelease
} MouseEventType; 

typedef struct {
    MouseEventType type;
    int32_t x;
    int32_t y;
} MouseEvent;

void activate_mouse(SynchronizedQueue* queue);
void handle_mouse_interrupt();


#endif