#include <memory.h>
#include <widget.h>
#include <image.h>
#include <types.h>
#include <desktop_image.h>
#include <event.h>
#include <icons.h>
#include <desktop_selected_zone.h>
#include <windows.h>
#include <graphics_mode.h>
#include <terminal_icon.h>
#include <terminal_bitmask.h>

static uint32_t last_left_click_x = 0;
static uint32_t last_left_click_y = 0;
static uint8_t is_mouse_clicked = 0;

static void handle_desktop_click(Widget* desktop, Event* event) {
    last_left_click_x = event->mouse_x;
    last_left_click_y = event->mouse_y;
    is_mouse_clicked = 1;
}

static void handle_mouse_release(Widget* desktop, Event* event) {
    stop_dragging_icons();
    is_mouse_clicked = 0;
}

static Widget* create_bottom_bar(Widget* desktop) {
    Widget* bottom_bar = malloc(sizeof(Widget));
    init_widget(bottom_bar);
    bottom_bar->style.background_color = 0x131313;
    bottom_bar->style.position = PositionFixed;
    widget_set_bottom(bottom_bar, 0);
    widget_set_top(bottom_bar, SCREEN_HEIGHT - 65);
    widget_append_child(desktop, bottom_bar);
    return bottom_bar;
}

static Widget* create_windows_container(Widget* desktop) {
    Widget* windows_container = malloc(sizeof(Widget));
    init_widget(windows_container);
    widget_append_child(desktop, windows_container);
    return windows_container;
}

Widget* create_desktop() {
    Widget* desktop = malloc(sizeof(Widget));
    image_create(desktop, SCREEN_WIDTH, SCREEN_HEIGHT, desktop_bitmap, 0);
    desktop->style.position = PositionAbsolute;
    desktop->on_mouse_down = handle_desktop_click;
    desktop->on_mouse_up = handle_mouse_release;
    create_selected_zone(desktop, &last_left_click_x, &last_left_click_y, &is_mouse_clicked);
    create_icons(desktop);
    Widget* windows_container = create_windows_container(desktop);
    Widget* bottom_bar = create_bottom_bar(desktop);
    init_windows(desktop, windows_container, bottom_bar);
    //create_window(terminal_bitmask, terminal_bitmap);
    //create_window(terminal_bitmask, terminal_bitmap);
    //create_window(terminal_bitmask, terminal_bitmap);
    return desktop;
}
