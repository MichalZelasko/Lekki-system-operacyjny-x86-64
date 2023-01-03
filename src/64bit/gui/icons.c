#include <types.h>
#include <memory.h>
#include <list.h>
#include <folder_icon.h>
#include <folder_bitmask.h>
#include <trash_icon.h>
#include <trash_bitmask.h>
#include <terminal_icon.h>
#include <terminal_bitmask.h>
#include <event.h>
#include <utils.h>
#include <widget.h>
#include <graphics_mode.h>
#include <clock_driver.h>
#include <windows.h>
#include <proces.h>
#include <proces_bitmask.h>
#include <file.h>

#define GRID_WIDTH 10
#define GRID_HEIGHT 8
#define CELL_WIDTH (SCREEN_WIDTH / GRID_WIDTH)
#define CELL_HEIGHT (SCREEN_HEIGHT / GRID_HEIGHT)
#define ICON_WIDTH 48
#define ICON_HEIGHT 48
#define ICON_SPACE_X ((CELL_WIDTH - ICON_WIDTH) / 2)
#define ICON_SPACE_Y ((CELL_HEIGHT - ICON_HEIGHT) / 2)

typedef struct {
    Widget* widget;
    uint8_t* bitmap;
    uint8_t* bitmask;
    uint8_t is_selected;
    uint8_t is_dragged;
    int8_t x;
    int8_t y;
    uint64_t last_click_time;
} Icon;

static List* icons;
static uint32_t drag_start_x;
static uint32_t drag_start_y;
static uint8_t is_dragging_icons = 0;

static void render_icon(Widget* widget, uint8_t* buffer) {
    Icon* icon = widget->extra_data;
    if (icon->is_selected) {
        for (uint32_t x = icon->x * CELL_WIDTH; x < CELL_WIDTH + icon->x * CELL_WIDTH; x++) {
            for (uint32_t y = icon->y * CELL_HEIGHT; y < CELL_HEIGHT + icon->y * CELL_HEIGHT; y++) {
                uint32_t buffer_position = y * SCREEN_WIDTH * PIXEL_BYTES + x * PIXEL_BYTES;
                buffer[buffer_position + 0] = min(buffer[buffer_position + 0] + 40, 255);
                buffer[buffer_position + 1] = min(buffer[buffer_position + 1] + 40, 255);
            }
        }
    }
    
    if (icon->is_dragged && is_dragging_icons) {
        int32_t drag_x = get_mouse_x() - drag_start_x;
        int32_t drag_y = get_mouse_y() - drag_start_y;
        int32_t buffer_base_x = icon->x * CELL_WIDTH + ICON_SPACE_X + drag_x;
        int32_t buffer_base_y = icon->y * CELL_HEIGHT + ICON_SPACE_Y + drag_y;
        for (int32_t x = max(0, -buffer_base_x); x < ICON_WIDTH && buffer_base_x + x < SCREEN_WIDTH; x++) {
            for (int32_t y = max(0, -buffer_base_y); y < ICON_HEIGHT && buffer_base_y + y < SCREEN_HEIGHT; y++) {
                if (icon->bitmask[y * ICON_WIDTH * PIXEL_BYTES + x * PIXEL_BYTES] > 127) {
                    uint8_t* icon_dest = buffer + (buffer_base_y + y) * SCREEN_WIDTH * PIXEL_BYTES + (buffer_base_x + x) * PIXEL_BYTES;
                    uint8_t* icon_src = icon->bitmap + y * ICON_WIDTH * PIXEL_BYTES + x * PIXEL_BYTES;
                    icon_dest[0] = (icon_src[0] + icon_dest[0]) / 2;
                    icon_dest[1] = (icon_src[1] + icon_dest[1]) / 2;
                    icon_dest[2] = (icon_src[2] + icon_dest[2]) / 2;
                }
            }
        }
    }

    int32_t icon_x = widget->x + ICON_SPACE_X;
    int32_t icon_y = widget->y + ICON_SPACE_Y;
    for (uint32_t y = max(icon_y, 0); y < min(icon_y + ICON_HEIGHT, SCREEN_HEIGHT); y++) {
        uint8_t* buffer_dest = buffer + y * SCREEN_WIDTH * PIXEL_BYTES + max(icon_x * PIXEL_BYTES, 0);
        uint8_t* bitmap_src = icon->bitmap + (y - icon_y) * ICON_WIDTH * PIXEL_BYTES - min(icon_x * PIXEL_BYTES, 0);
        uint8_t* bitmask_src = icon->bitmask + (y - icon_y) * ICON_WIDTH * PIXEL_BYTES - min(icon_x * PIXEL_BYTES, 0);
        int32_t copied_bytes = min((ICON_WIDTH + min(0, icon_x)), SCREEN_WIDTH - icon_x) * PIXEL_BYTES;
        if (copied_bytes <= 0) {
            return;
        } 
        bitmask_memcpy(buffer_dest, bitmap_src, bitmask_src, copied_bytes);
    }
}

static inline void deselect_icons() {
    for (uint32_t i = 0; i < icons->length; i++) {
        Icon* icon = list_get(icons, i);
        icon->is_selected = 0;
    }
};

static inline void start_dragging_icons() {
    for (uint32_t i = 0; i < icons->length; i++) {
        Icon* icon = list_get(icons, i);
        if (icon->is_selected) {
            icon->is_dragged = 1;
        }
    }
}

static void icon_on_click(Widget* widget, Event* event) {
    event_stop_propagation(event);
    is_dragging_icons = 1;
    drag_start_x = event->mouse_x;
    drag_start_y = event->mouse_y;
    Icon* icon = widget->extra_data;
    if (get_clock_ticks() - icon->last_click_time < 10) {
        create_window(icon->bitmap, icon->bitmask);
        return;
    }
    if (icon->is_selected) {
        start_dragging_icons();
    } else {
        deselect_icons();
        icon->is_selected = 1;
        icon->is_dragged = 1;
    }
    icon->last_click_time = get_clock_ticks();
}

static void proces_icon_on_click(Widget* widget, Event* event) {
    event_stop_propagation(event);
    is_dragging_icons = 1;
    drag_start_x = event->mouse_x;
    drag_start_y = event->mouse_y;
    Icon* icon = widget->extra_data;
    if (get_clock_ticks() - icon->last_click_time < 10) {
        create_window_proces(icon->bitmap, icon->bitmask);
        return;
    }
    if (icon->is_selected) {
        start_dragging_icons();
    } else {
        deselect_icons();
        icon->is_selected = 1;
        icon->is_dragged = 1;
    }
    icon->last_click_time = get_clock_ticks();
}

static void folder_icon_on_click(Widget* widget, Event* event) {
    event_stop_propagation(event);
    is_dragging_icons = 1;
    drag_start_x = event->mouse_x;
    drag_start_y = event->mouse_y;
    Icon* icon = widget->extra_data;
    if (get_clock_ticks() - icon->last_click_time < 10) {
        create_window_file_menager(icon->bitmap, icon->bitmask);
        return;
    }
    if (icon->is_selected) {
        start_dragging_icons();
    } else {
        deselect_icons();
        icon->is_selected = 1;
        icon->is_dragged = 1;
    }
    icon->last_click_time = get_clock_ticks();
}

static void text_editor_icon_on_click(Widget* widget, Event* event) {
    event_stop_propagation(event);
    is_dragging_icons = 1;
    drag_start_x = event->mouse_x;
    drag_start_y = event->mouse_y;
    Icon* icon = widget->extra_data;
    if (get_clock_ticks() - icon->last_click_time < 10) {
        create_window_text_editor(icon->bitmap, icon->bitmask);
        //create_window(icon->bitmap, icon->bitmask);
        return;
    }
    if (icon->is_selected) {
        start_dragging_icons();
    } else {
        deselect_icons();
        icon->is_selected = 1;
        icon->is_dragged = 1;
    }
    icon->last_click_time = get_clock_ticks();
}

static inline void init_icon(Widget* widget, Icon* icon, Widget* parent) {
    init_widget(widget);
    widget_set_width(widget, CELL_WIDTH);
    widget_set_height(widget, CELL_HEIGHT);
    widget->x = icon->x * CELL_WIDTH;
    widget->y = icon->y * CELL_HEIGHT;
    widget->render = render_icon;
    list_append(icons, icon);
    widget->extra_data = icon;
    widget->on_mouse_down = icon_on_click;
    widget->parent = parent;
    widget->style.position = PositionAbsolute;
    icon->widget = widget;
    list_append(parent->children, widget);
}

void create_icons(Widget* parent) {
    icons = list_create();
    Widget* folder_widget = malloc(sizeof(Widget));
    Widget* trash_widget = malloc(sizeof(Widget));
    Widget* terminal_widget = malloc(sizeof(Widget));
    Widget* task_menager_widget = malloc(sizeof(Widget));
    Widget* text_editor_widget = malloc(sizeof(Widget));
    Icon* folder_icon = malloc(sizeof(Icon));
    Icon* trash_icon = malloc(sizeof(Icon));
    Icon* terminal_icon = malloc(sizeof(Icon));
    Icon* task_menager_icon = malloc(sizeof(Icon));
    Icon* text_editor_icon = malloc(sizeof(Icon));
    folder_icon->bitmap = folder_bitmap;
    folder_icon->bitmask = folder_bitmask;
    folder_icon->is_selected = 0;
    folder_icon->x = 0;
    folder_icon->y = 0;
    folder_icon->widget = 0;
    folder_icon->last_click_time = 0;
    trash_icon->bitmap = trash_bitmap;
    trash_icon->bitmask = trash_bitmask;
    trash_icon->is_selected = 0;
    trash_icon->x = 1;
    trash_icon->y = 0;
    trash_icon->widget = 0;
    trash_icon->last_click_time = 0;
    terminal_icon->bitmap = terminal_bitmap;
    terminal_icon->bitmask = terminal_bitmask;
    terminal_icon->is_selected = 0;
    terminal_icon->x = 0;
    terminal_icon->y = 1;
    terminal_icon->widget = 0;
    terminal_icon->last_click_time = 0;
    task_menager_icon->bitmap = proces;
    task_menager_icon->bitmask = proces_bitmask;
    task_menager_icon->is_selected = 0;
    task_menager_icon->x = 1;
    task_menager_icon->y = 1;
    task_menager_icon->widget = 0;
    task_menager_icon->last_click_time = 0;
    text_editor_icon->bitmap = file;
    text_editor_icon->bitmask = terminal_bitmask;
    text_editor_icon->is_selected = 0;
    text_editor_icon->x = 2;
    text_editor_icon->y = 1;
    text_editor_icon->widget = 0;
    text_editor_icon->last_click_time = 0;
    init_icon(folder_widget, folder_icon, parent);
    folder_widget->on_mouse_down = folder_icon_on_click;
    init_icon(terminal_widget, terminal_icon, parent);
    init_icon(trash_widget, trash_icon, parent);
    init_icon(task_menager_widget, task_menager_icon, parent);
    task_menager_widget->on_mouse_down = proces_icon_on_click;
    init_icon(text_editor_widget, text_editor_icon, parent);
    text_editor_widget->on_mouse_down = text_editor_icon_on_click;
}

void select_icons(uint32_t x0, uint32_t x1, uint32_t y0, uint32_t y1) {
    for (uint32_t i = 0; i < icons->length; i++) {
        Icon* icon = list_get(icons, i);
        uint32_t icon_x0 = icon->x * CELL_WIDTH;
        uint32_t icon_x1 = (icon->x + 1) * CELL_WIDTH;
        uint32_t icon_y0 = icon->y * CELL_HEIGHT;
        uint32_t icon_y1 = (icon->y + 1) * CELL_HEIGHT;
        icon->is_selected = 0;
        if (x0 <= icon_x0 && y0 < icon_y0) {
            if (x1 >= icon_x0 && y1 >= icon_y0) {
                icon->is_selected = 1;
            }
        } else if (x0 <= icon_x0 && y0 <= icon_y1) {
            if (x1 >= icon_x0) {
                icon->is_selected = 1;
            }
        } else if (x0 <= icon_x1 && y0 <= icon_y0) {
            if (y1 >= icon_y0) {
                icon->is_selected = 1;
            }
        } else if (x0 <= icon_x1 && y0 <= icon_y1) {
            icon->is_selected = 1;
        }
    }
}

void stop_dragging_icons() {
    if (!is_dragging_icons) {
        return;
    }
    is_dragging_icons = 0;
    int32_t drag_x = get_mouse_x() - drag_start_x;
    int32_t drag_y = get_mouse_y() - drag_start_y;
    for (uint32_t i = 0; i < icons->length; i++) {
        Icon* icon = list_get(icons, i);
        if (icon->is_dragged) {
            icon->x += round((double)drag_x / CELL_WIDTH);
            icon->y += round((double)drag_y / CELL_HEIGHT);
            icon->x = in_range(0, GRID_WIDTH - 1, icon->x);
            icon->y = in_range(0, GRID_HEIGHT - 1, icon->y);
            uint8_t is_on_another_icon = 1;
            while (is_on_another_icon) {
                is_on_another_icon = 0;
                for (uint32_t j = 0; j < icons->length; j++) {
                    Icon* checked_icon = list_get(icons, j);
                    if (!checked_icon->is_dragged && checked_icon->x == icon->x && checked_icon->y == icon->y) {
                        is_on_another_icon = 1;
                        icon->y++;
                        if (icon->y == GRID_HEIGHT) {
                            icon->y = 0;
                            icon->x++;
                            if (icon->x == GRID_WIDTH) {
                                icon->x = 0;
                            }
                        }
                        break;
                    }
                }
            }
            icon->is_dragged = 0;
            icon->widget->x = icon->x * CELL_WIDTH;
            icon->widget->y = icon->y * CELL_HEIGHT;
        }
    }
}

