#ifndef GRAPHICS_MODE_H
#define GRAPHICS_MODE_H
#include <types.h>
#include <keyboard_driver.h>
#include <mouse_driver.h>
#include <widget.h>

#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 768
#define PIXEL_BYTES 3

void set_graphics_mode(void* boot_info);
void add_drag_observer(Widget* widget);
void add_release_observer(Widget* widget);
void remove_drag_observer(Widget* widget);
void remove_release_observer(Widget* widget);
void render();
void handle_mouse_event(MouseEvent* mouse_event);
uint32_t get_mouse_x();
uint32_t get_mouse_y();
extern Widget* desktop; 

#endif