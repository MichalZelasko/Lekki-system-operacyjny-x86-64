#ifndef DESKTOP_SELECTED_ZONE_H
#define DESKTOP_SELECTED_ZONE_H
#include <types.h>
#include <widget.h>

Widget* create_selected_zone(Widget* parent, uint32_t* last_left_click_x, uint32_t* last_left_click_y, uint8_t* is_mouse_clicked);

#endif