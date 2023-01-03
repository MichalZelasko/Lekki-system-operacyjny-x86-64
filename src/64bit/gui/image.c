#include <image.h>
#include <memory.h>
#include <widget.h>
#include <types.h>
#include <utils.h>
#include <graphics_mode.h>

typedef struct {
    uint8_t* bitmap;
    uint8_t* bitmask;
} Image;

static void render_image(Widget* widget, uint8_t* buffer) {
    Image* image = widget->render_data;
    if (image->bitmask != 0) {
        for (int32_t y = max(widget->y, 0); y < min(widget->y + widget->height, SCREEN_HEIGHT); y++) {
            uint8_t* buffer_dest = buffer + y * SCREEN_WIDTH * PIXEL_BYTES + max(widget->x * PIXEL_BYTES, 0);
            uint8_t* bitmap_src = image->bitmap + (y - widget->y) * widget->width * PIXEL_BYTES - min(widget->x * PIXEL_BYTES, 0);
            uint8_t* bitmask_src = image->bitmask + (y - widget->y) * widget->width * PIXEL_BYTES - min(widget->x * PIXEL_BYTES, 0);
            int32_t copied_bytes = min((widget->width + min(0, widget->x)), SCREEN_WIDTH - widget->x) * PIXEL_BYTES;
            if (copied_bytes <= 0) {
                return;
            }
            bitmask_memcpy(buffer_dest, bitmap_src, bitmask_src, copied_bytes);
        }
    } else {
        if (widget->width == SCREEN_WIDTH && widget->height == SCREEN_HEIGHT && widget->x == 0 && widget->y == 0) {
            memcpy(buffer, image->bitmap, SCREEN_WIDTH * SCREEN_HEIGHT * PIXEL_BYTES);
            return;
        }
        for (uint32_t y = max(widget->y, 0); y < min(widget->y + widget->height, SCREEN_HEIGHT); y++) {
            uint8_t* buffer_dest = buffer + y * SCREEN_WIDTH * PIXEL_BYTES + max(widget->x * PIXEL_BYTES, 0);
            uint8_t* bitmap_src = image->bitmap + (y - widget->y) * widget->width * PIXEL_BYTES - min(widget->x * PIXEL_BYTES, 0);
            int32_t copied_bytes = min((widget->width + min(0, widget->x)), SCREEN_WIDTH - widget->x) * PIXEL_BYTES;
            if (copied_bytes <= 0) {
                return;
            }
            memcpy(buffer_dest, bitmap_src, copied_bytes);
        }
    }
}

void image_create(Widget* widget, uint32_t width, uint32_t height, uint8_t* bitmap, uint8_t* bitmask) {
    Image* created = malloc(sizeof(Image));
    created->bitmap = bitmap;
    created->bitmask = bitmask;
    init_widget(widget);
    widget_set_width(widget, width);
    widget_set_height(widget, height);
    widget->render = render_image;
    widget->render_data = created;
}
