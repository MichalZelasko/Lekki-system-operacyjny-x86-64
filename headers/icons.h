#ifndef ICONS_H
#define ICONS_H
#include <types.h>
#include <widget.h>

void render_icons(uint8_t* backbuffer, uint8_t is_dragging_icons, int32_t deag_x, int32_t drag_y);
void select_icons(uint32_t x0, uint32_t y0, uint32_t x1, uint32_t y1);
void create_icons(Widget* parent);
void stop_dragging_icons();
#endif