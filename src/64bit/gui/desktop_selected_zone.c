#include <types.h>
#include <memory.h>
#include <widget.h>
#include <utils.h>
#include <graphics_mode.h>
#include <icons.h>

typedef struct {
    uint32_t* last_left_click_x;
    uint32_t* last_left_click_y;
    uint8_t* is_mouse_clicked;
} SelectedZone;

static void render_selected_zone(Widget* widget, uint8_t* buffer) {
    SelectedZone* selected_zone = widget->extra_data;

    if (!(*selected_zone->is_mouse_clicked)) {
        return;
    }

    uint32_t x0 = min(get_mouse_x(), *selected_zone->last_left_click_x);
    uint32_t x1 = max(get_mouse_x(), *selected_zone->last_left_click_x);
    uint32_t y0 = min(get_mouse_y(), *selected_zone->last_left_click_y);
    uint32_t y1 = max(get_mouse_y(), *selected_zone->last_left_click_y);

    select_icons(x0, x1, y0, y1);

    for (uint32_t x = x0; x < x1; x++) {
        for (uint32_t y = y0; y < y1; y++) {
            uint32_t buffer_position = y * SCREEN_WIDTH * PIXEL_BYTES + x * PIXEL_BYTES; 
            buffer[buffer_position + 0] = min(255, buffer[buffer_position + 0] + 40);
            buffer[buffer_position + 1] = min(255, buffer[buffer_position + 1] + 40);
            buffer[buffer_position + 2] = min(255, buffer[buffer_position + 2] + 40);
        }
    }
}

Widget* create_selected_zone(Widget* parent, uint32_t* last_left_click_x, uint32_t* last_left_click_y, uint8_t* is_mouse_clicked) {
    SelectedZone* selected_zone = malloc(sizeof(SelectedZone));
    selected_zone->last_left_click_x = last_left_click_x;
    selected_zone->last_left_click_y = last_left_click_y;
    selected_zone->is_mouse_clicked = is_mouse_clicked;
    Widget* selected_zone_widget = malloc(sizeof(Widget));
    init_widget(selected_zone_widget);
    selected_zone_widget->render = render_selected_zone;
    selected_zone_widget->extra_data = selected_zone;
    widget_append_child(parent, selected_zone_widget);
}
