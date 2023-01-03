#ifndef WIDGET_H
#define WIDGET_H
#include <types.h>
#include <event.h>
#include <list.h>

typedef enum {
    PositionStatic,
    PositionAbsolute,
    PositionRelative,
    PositionFixed,
} WidgetPositionType;

typedef enum {
    SizeAuto,     
    SizeFitContent,
    SizeStatic,     
} WidgetSizeType;

typedef struct {
    WidgetPositionType position;
    int32_t top;
    int32_t bottom;
    int32_t left;
    int32_t right;
    uint8_t position_flags;     // which properties from top, bottom, left, right should be used in computing widget positon
    uint32_t background_color;
    uint8_t* background_image;
    uint8_t* background_bitmask;
    double background_opacity;
} WidgetStyle;

typedef struct Widget {
    int32_t x;
    int32_t y;
    uint32_t width;
    uint32_t height;
    WidgetSizeType width_type;
    WidgetSizeType height_type;
    uint8_t is_hidden;
    List* children;
    void* extra_data;
    void* render_data;
    WidgetStyle style;
    struct Widget* parent;
    void (*render)(struct Widget* widget, uint8_t* buffer);
    void (*on_mouse_down)(struct Widget* widget, Event* event);
    void (*on_mouse_enter)(struct Widget* widget, Event* event);
    void (*on_mouse_leave)(struct Widget* widget, Event* event);
    void (*on_mouse_up)(struct Widget* widget, Event* event);
    void (*on_mouse_move)(struct Widget* widget, Event* event);
} Widget;

void init_widget(Widget* widget);
void widget_destroy(Widget* widget); 
void widget_pop(Widget* widget);
void widget_render(Widget* widget, uint8_t* buffer);
void widget_on_mouse_down(Widget* widget, Event* event);
void widget_on_mouse_enter(Widget* widget, Event* event);
void widget_on_mouse_leave(Widget* widget, Event* event);
void widget_on_mouse_up(Widget* widget, Event* event);
void widget_set_width(Widget* widget, uint32_t width); 
void widget_set_height(Widget* widget, uint32_t height); 
void widget_set_top(Widget* widget, int32_t top); 
void widget_clear_top(Widget* widget); 
void widget_set_bottom(Widget* widget, int32_t bottom); 
void widget_clear_bottom(Widget* widget); 
void widget_set_left(Widget* widget, int32_t left); 
void widget_clear_left(Widget* widget); 
void widget_set_right(Widget* widget, int32_t right); 
void widget_clear_right(Widget* widget); 
void widget_append_child(Widget* parent, Widget* child);

#endif
