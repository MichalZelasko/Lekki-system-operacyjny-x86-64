#include <memory.h>
#include <mouse_driver.h>
#include <cursor.h>
#include <cursor_bitmask.h>
#include <clock_driver.h>
#include <utils.h>
#include <icons.h>
#include <windows.h>
#include <widget.h>
#include <image.h>
#include <event.h>
#include <desktop.h>
#include <graphics_mode.h>
#include <list.h>

static uint8_t* framebuffer_ptr; 
static uint32_t framebuffer_pitch;
static uint32_t framebuffer_width;
static uint32_t framebuffer_height;
static uint8_t framebuffer_bpp;
static uint8_t framebuffer_type;
static uint8_t bytes_per_pixel;

static uint8_t backbuffer[SCREEN_WIDTH * SCREEN_HEIGHT * PIXEL_BYTES];

static uint8_t is_mouse_clicked = 0;
static uint8_t is_dragging_icons = 0;
static uint32_t mouse_x = SCREEN_WIDTH / 2;
static uint32_t mouse_y = SCREEN_HEIGHT / 2;
static int32_t drag_x = 0;
static int32_t drag_y = 0;
Widget* desktop;

static List* mouse_drag_observers;
static List* mouse_release_observers;

void add_drag_observer(Widget* widget) {
    list_append(mouse_drag_observers, widget);
}

void remove_drag_observer(Widget* widget) {
    list_remove(mouse_drag_observers, widget);
}

void add_release_observer(Widget* widget) {
    list_append(mouse_release_observers, widget);
}

void remove_release_observer(Widget* widget) {
    list_remove(mouse_release_observers, widget);
} 

void set_graphics_mode(void* boot_info) {
    framebuffer_ptr = *((uint8_t**)(boot_info + 88));
    framebuffer_pitch = *((uint32_t*)(boot_info + 96));
    framebuffer_width = *((uint32_t*)(boot_info + 100));
    framebuffer_height = *((uint32_t*)(boot_info + 104));
    framebuffer_bpp = *((uint8_t*)(boot_info + 108));
    framebuffer_type = *((uint8_t*)(boot_info + 109));
    bytes_per_pixel = framebuffer_bpp / 8;
    
    mouse_drag_observers = list_create();
    mouse_release_observers = list_create();
    desktop = create_desktop();
}

void render_desktop() {
    widget_render(desktop, backbuffer);
}

void render_cursor() {
    Widget cursor;
    image_create(&cursor, 22, 32, cursor_bitmap, cursor_bitmask);
    cursor.x = mouse_x;
    cursor.y = mouse_y;
    widget_render(&cursor, backbuffer);
    widget_destroy(&cursor);
}

uint32_t get_mouse_x() {
    return mouse_x;
}

uint32_t get_mouse_y() {
    return mouse_y;
}

void render() {
    mouse_x += drag_x;
    mouse_y += drag_y;
    render_desktop();
    render_cursor();
    memcpy(framebuffer_ptr, backbuffer, sizeof(backbuffer));
    drag_x = 0;
    drag_y = 0;
}

void handle_mouse_drag(int32_t x, int32_t y) {
    drag_x += x;
    drag_y += y;
    for (uint32_t i = 0; i < mouse_drag_observers->length; i++) {
        Widget* observer = list_get(mouse_drag_observers, i);
        Event event;
        event.mouse_x = x;
        event.mouse_y = y;
        event.is_captured = 1;
        event.is_bubbling = 1;
        event.target = 0;
        observer->on_mouse_move(observer, &event);
    }
}

void handle_right_click(int32_t x_pos, int32_t y_pos) {
    
};

void handle_right_release(int32_t x_pos, int32_t y_pos) {
    
};

void handle_mouse_event(MouseEvent* driver_event) {
    Event gui_event;
    event_init(&gui_event, driver_event->x, driver_event->y);
    switch (driver_event->type) {
        case MouseDrag: {
            handle_mouse_drag(driver_event->x, driver_event->y);            
            return;
        }
        case MouseLeftClick: {
            widget_on_mouse_down(desktop, &gui_event);
            return;
        }
        case MouseRightClick: {
            handle_right_click(driver_event->x, driver_event->y);
            return;
        }
        case MouseLeftRelease: {
            widget_on_mouse_up(desktop, &gui_event);
            for (int32_t i = 0; i < mouse_release_observers->length; i++) {
                Widget* observer = list_get(mouse_release_observers, i);
                Event event;
                event_init(&event, driver_event->x, driver_event->y);
                observer->on_mouse_up(observer, &event);
            }
            return;
        }
        case MouseRightRelease: {
            handle_right_release(driver_event->x, driver_event->y);
            return;
        }
    }
}
