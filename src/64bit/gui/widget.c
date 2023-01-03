#include <widget.h>
#include <graphics_mode.h>
#include <utils.h>
#include <types.h>
#include <memory.h>
#include <event.h>
#include <list.h>

// flags used to calculating widget position
// used as values of Widget.style.position_flags attribute.
#define TOP_POSITION_USED    (1 << 0)
#define BOTTOM_POSITION_USED (1 << 1)
#define LEFT_POSITION_USED   (1 << 2)
#define RIGHT_POSITION_USED  (1 << 3)

static void widget_calculate_position(Widget* widget);

static void render_ignore(Widget* widget, uint8_t* buffer) {
    return;
};

static void mouse_event_ignore(Widget* widget, Event* event) {
    return;
}

void init_widget(Widget* widget) {
    widget->parent = 0;
    widget->x = 0;
    widget->y = 0;
    widget->width = 0;
    widget->height = 0;
    widget->render_data = 0;
    widget->is_hidden = 0;
    widget->extra_data = 0;
    widget->children = list_create();
    widget->width_type = SizeAuto;
    widget->height_type = SizeAuto;
    widget->render = render_ignore;
    widget->on_mouse_down = mouse_event_ignore;
    widget->on_mouse_enter = mouse_event_ignore;
    widget->on_mouse_leave = mouse_event_ignore;
    widget->on_mouse_up = mouse_event_ignore;
    widget->on_mouse_move = mouse_event_ignore;
    widget->style.position = PositionStatic;
    widget->style.background_image = 0;
    widget->style.background_color = 0;
    widget->style.background_bitmask = 0;
    widget->style.background_opacity = 0;
    widget->style.position_flags = 0;
}

void widget_set_width(Widget* widget, uint32_t width) {
    widget->width_type = SizeStatic;
    widget->width = width;
}

void widget_set_height(Widget* widget, uint32_t height) {
    widget->height_type = SizeStatic;
    widget->height = height;
}

static inline void render_children(Widget* widget, uint8_t* buffer) {
    for (int i = 0; i < widget->children->length; i++) {
        Widget* child = list_get(widget->children, i);
        widget_render(child, buffer);
    }
}

void widget_render(Widget* widget, uint8_t* buffer) {
    if (widget->is_hidden) {
        return;
    }
    if (widget->style.background_color) {
        for (int32_t x = max(0, widget->x); x < min(widget->x + widget->width, SCREEN_WIDTH); x++) {
            for (int32_t y = max(0, widget->y); y < min(widget->y + widget->height, SCREEN_HEIGHT); y++) {
                buffer[SCREEN_WIDTH * y * PIXEL_BYTES + x * PIXEL_BYTES + 0] = (widget->style.background_color & 0x0000ff) >> 0;
                buffer[SCREEN_WIDTH * y * PIXEL_BYTES + x * PIXEL_BYTES + 1] = (widget->style.background_color & 0x00ff00) >> 8;
                buffer[SCREEN_WIDTH * y * PIXEL_BYTES + x * PIXEL_BYTES + 2] = (widget->style.background_color & 0xff0000) >> 16;
            }
        }
    }
    widget->render(widget, buffer);
    render_children(widget, buffer);
}

static inline void calculate_children_positions(Widget* widget) {
    for (int32_t i = 0; i < widget->children->length; i++) {
        Widget* child = list_get(widget->children, i);
        widget_calculate_position(child);
    }
}

static inline void widget_calculate_static_position(Widget* widget) {
    Widget* parent = widget->parent;
    widget->x = parent->x;
    int32_t max_y = parent->y;
    for (uint32_t i = 0; i < parent->children->length; i++) {
        Widget* child = list_get(parent->children, i);
        if (child == widget) {
            widget->y = max_y;
            return;
        }
        if (child->style.position == PositionRelative) {
            max_y = max(max_y, child->y + child->height - child->style.top);
        }
        if (child->style.position == PositionStatic) {
            max_y = max(max_y, child->y + child->height);
        }
    }
}

static inline void widget_calculate_absolute_position(Widget* widget) {
    Widget* parent = widget->parent;
    while (parent->style.position == PositionStatic) {
        parent = parent->parent;
    }
    widget->x = parent->x;
    widget->y = parent->y;
    if (widget->style.position_flags & LEFT_POSITION_USED) {
        widget->x += widget->style.left;
        if (widget->style.position_flags & RIGHT_POSITION_USED) {
            widget->width = parent->x + parent->width - widget->style.right - widget->x;
        }
    } else if (widget->style.position_flags & RIGHT_POSITION_USED) {
        widget->x = parent->x + parent->width - widget->style.right - widget->width;
    }
    if (widget->style.position_flags & TOP_POSITION_USED) {
        widget->y += widget->style.top;
        if (widget->style.position_flags & BOTTOM_POSITION_USED) {
            widget->height = parent->y + parent->height - widget->style.bottom - widget->y;
        }
    } else if (widget->style.position_flags & BOTTOM_POSITION_USED) {
        widget->y = parent->y + parent->height - widget->style.bottom - widget->height;
    }
}

static inline void widget_calculate_fixed_position(Widget* widget) {
    widget->x = 0;
    widget->y = 0;
    if (widget->style.position_flags & LEFT_POSITION_USED) {
        widget->x = widget->style.left;
    }
    if (widget->style.position_flags & TOP_POSITION_USED) {
        widget->y = widget->style.top;
    }
    if (widget->style.position_flags & RIGHT_POSITION_USED) {
        widget->width = SCREEN_WIDTH - widget->style.right - widget->x;
    }
    if (widget->style.position_flags & BOTTOM_POSITION_USED) {
        widget->height = SCREEN_HEIGHT - widget->style.bottom - widget->y;
    }
}

static inline void widget_calculate_relative_position(Widget* widget) {
    widget_calculate_static_position(widget);
    if (widget->style.position_flags & LEFT_POSITION_USED) {
        widget->x += widget->style.left;
    }
    if (widget->style.position_flags & TOP_POSITION_USED) {
        widget->y += widget->style.top;
    }
    if (widget->style.position_flags & RIGHT_POSITION_USED && !(widget->style.position_flags & LEFT_POSITION_USED)) {
        widget->x -= widget->style.right;
    }
    if (widget->style.position_flags & BOTTOM_POSITION_USED && !(widget->style.position_flags & TOP_POSITION_USED)) {
        widget->y -= widget->style.bottom;
    }
}

static void widget_calculate_position(Widget* widget) {
    switch (widget->style.position) {
    case PositionStatic:
        widget_calculate_static_position(widget);        
        break;
    case PositionAbsolute:
        widget_calculate_absolute_position(widget);
        break;
    case PositionFixed:
        widget_calculate_fixed_position(widget);
        break;
    case PositionRelative:
        widget_calculate_relative_position(widget);
        break;
    } 
}

typedef void (*MouseEventFunction)(Widget* widget, Event* event);

static inline void propagate_mouse_event(Widget* widget, Event* event, MouseEventFunction event_function) {
    if (widget->is_hidden) {
        return;
    }
    int32_t x = event->mouse_x;
    int32_t y = event->mouse_y;
    if (x >= widget->x && x < widget->x + widget->width) {
        if (y >= widget->y && y < widget->y + widget->height) { 
            event->target = widget;
        }
    }
    for (int i = widget->children->length - 1; i >= 0; i--) {
        if (event->is_captured) {
            return;
        }
        Widget* child = list_get(widget->children, i);
        event_function(child, event);
    }
    if (widget == event->target) {
        event->is_captured = 1;
    }
}

void widget_on_mouse_down(Widget* widget, Event* event) {
    propagate_mouse_event(widget, event, widget_on_mouse_down);
    if (event->is_captured && widget == event->target) {
        event->is_bubbling = 1;
    }
    if (!event->is_bubbling || !event->is_captured) {
        return;
    }
    widget->on_mouse_down(widget, event);
}

void widget_on_mouse_enter(Widget* widget, Event* event) {
    propagate_mouse_event(widget, event, widget_on_mouse_enter);
    if (event->is_captured && widget == event->target) {
        event->is_bubbling = 1;
    }
    if (!event->is_bubbling || !event->is_captured) {
        return;
    }
    widget->on_mouse_enter(widget, event);
}

void widget_on_mouse_leave(Widget* widget, Event* event) {
    propagate_mouse_event(widget, event, widget_on_mouse_leave);
    if (event->is_captured && widget == event->target) {
        event->is_bubbling = 1;
    }
    if (!event->is_bubbling || !event->is_captured) {
        return;
    }
    widget->on_mouse_leave(widget, event);
}

void widget_on_mouse_up(Widget* widget, Event* event) {
    propagate_mouse_event(widget, event, widget_on_mouse_up);
    if (event->is_captured && widget == event->target) {
        event->is_bubbling = 1;
    }
    if (!event->is_bubbling || !event->is_captured) {
        return;
    }
    widget->on_mouse_up(widget, event);
}

static inline void widget_calculate_size(Widget* widget) {
    if (widget->width_type == SizeAuto) {
        widget->width = widget->parent->width;
    }
    if (widget->width_type == SizeFitContent) {
        int32_t max_x = widget->x;
        for (uint32_t i = 0; i < widget->children->length; i++) {
            Widget* child = list_get(widget->children, i);
            if (child->style.position == PositionRelative) {
                if (child->style.position_flags & LEFT_POSITION_USED) {
                    max_x = max(max_x, child->x + child->width - child->style.left);
                } else if (child->style.position_flags & RIGHT_POSITION_USED) {
                    max_x = max(max_x, child->x + child->width + child->style.right);
                } else {
                    max_x = max(max_x, child->x + child->width);
                }
            }
            if (child->style.position == PositionStatic) {
                max_x = max(max_x, child->x + child->width);
            }
        }
        widget->width = max_x - widget->x;
    }
}

static void update_height(Widget* parent, Widget* child, uint32_t height_change) {
    if (child->style.position != PositionStatic && child->style.position != PositionRelative) {
        return;
    }
    if (parent->height_type != SizeAuto && parent->height_type != SizeFitContent) {
        return;
    }

    for (uint32_t i = list_find_index(parent->children, child) + 1; i < parent->children->length; i++) {
        Widget* sibling = list_get(parent->children, i);
        if (sibling->style.position == PositionStatic || sibling->style.position == PositionRelative ) {
            sibling->y += height_change;
        }
    }
    parent->height += height_change;
    update_height(parent->parent, parent, height_change);
}

static void update_children_positions(Widget* widget) {
    for (uint32_t i = 0; i < widget->children->length; i++) {
        Widget* child = list_get(widget->children, i);
        child->parent = widget;
        widget_calculate_size(child);
        widget_calculate_position(child);
        update_children_positions(child);
    }
}

void widget_set_top(Widget* widget, int32_t top) {
    widget->style.top = top;
    widget->style.position_flags |= TOP_POSITION_USED;
    widget_calculate_position(widget);
    update_children_positions(widget);
}

void widget_clear_top(Widget* widget) {
    widget->style.top = 0;
    widget->style.position_flags &= ~TOP_POSITION_USED; 
    widget_calculate_position(widget);
    update_children_positions(widget);
}

void widget_set_bottom(Widget* widget, int32_t bottom) {
    widget->style.bottom = bottom;
    widget->style.position_flags |= BOTTOM_POSITION_USED;
    widget_calculate_position(widget);
    update_children_positions(widget);
}

void widget_clear_bottom(Widget* widget) {
    widget->style.bottom = 0;
    widget->style.position_flags &= ~BOTTOM_POSITION_USED; 
    widget_calculate_position(widget);
    update_children_positions(widget);
}

void widget_set_left(Widget* widget, int32_t left) {
    widget->style.left = left;
    widget->style.position_flags |= LEFT_POSITION_USED;
    widget_calculate_position(widget);
    update_children_positions(widget);
}

void widget_clear_left(Widget* widget) {
    widget->style.left = 0;
    widget->style.position_flags &= ~LEFT_POSITION_USED; 
    widget_calculate_position(widget);
    update_children_positions(widget);
}

void widget_set_right(Widget* widget, int32_t right) {
    widget->style.right = right;
    widget->style.position_flags |= RIGHT_POSITION_USED;
    widget_calculate_position(widget);
    update_children_positions(widget);
}

void widget_clear_right(Widget* widget) {
    widget->style.right = 0;
    widget->style.position_flags &= ~RIGHT_POSITION_USED; 
    widget_calculate_position(widget);
    update_children_positions(widget);
}

void widget_append_child(Widget* parent, Widget* child) {
    child->parent = parent;
    list_append(parent->children, child);
    widget_calculate_size(child);
    widget_calculate_position(child);
    update_height(parent, child, child->height);
    update_children_positions(child);
}

void widget_destroy(Widget* widget) {
    for (int i = 0; i < widget->children->length; i++) {
        Widget* child = list_get(widget->children, i);
        widget_destroy(child);
    }
    list_destroy(widget->children);
    if (widget->extra_data) {
        free(widget->extra_data);
    }
    if (widget->render_data) {
        free(widget->render_data);
    }
    if (widget->parent) {
        list_pop(widget->parent->children, list_find_index(widget->parent->children, widget));
    }
}

void widget_pop(Widget* widget) {
    if (widget->parent) {
        list_pop(widget->parent->children, list_find_index(widget->parent->children, widget));
    }
}
