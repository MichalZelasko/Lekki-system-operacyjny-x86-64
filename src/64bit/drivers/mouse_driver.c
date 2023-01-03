#include <types.h>
#include <port.h>
#include <graphics_mode.h>
#include <synchronized_queue.h>
#include <mouse_driver.h>

static uint32_t mouse_x = SCREEN_WIDTH / 2;
static uint32_t mouse_y = SCREEN_HEIGHT / 2;
static uint16_t command_port = 0x64;
static uint16_t data_port = 0x60;
static SynchronizedQueue* queue;

void activate_mouse(SynchronizedQueue* mouse_queue) {
    queue = mouse_queue;
    port_write8(command_port, 0xA8);
    port_write8(command_port, 0x20); // command 0x60 = read controller command byte
    uint8_t status = port_read8(data_port) | 2;
    port_write8(command_port, 0x60); // command 0x60 = set controller command byte
    port_write8(data_port, status);
    port_write8(command_port, 0xD4);
    port_write8(data_port, 0xF4);
    port_read8(data_port);  
}

void handle_mouse_interrupt() {
    static uint8_t offset = 0;
    static uint8_t left_button = 0;
    static uint8_t right_button = 0;
    static uint8_t buffer[3];
    uint8_t status = port_read8(command_port);    

    if (!(status & 0x20)) {
        return;
    }

    buffer[offset] = port_read8(data_port);
    offset = (offset + 1) % 3;

    if (offset == 0) {
        if (buffer[0] & 0xc0) {
            // handle mouse desynchronization
            while ((port_read8(command_port) >> 1) & 0x1);
            port_write8(command_port, 0xd4);
            port_write8(data_port, 0xff);
            while (port_read8(data_port) != 0xaa);
            activate_mouse(queue);
            return;
        }

        uint8_t new_left_button = buffer[0] & 0x1;
        uint8_t new_right_button = buffer[0] & 0x2;
        int32_t new_mouse_x = mouse_x + buffer[1] - ((buffer[0] << 4) & 0x100);
        int32_t new_mouse_y = mouse_y - buffer[2] + ((buffer[0] << 3) & 0x100);

        if (new_mouse_x < 0) {
            new_mouse_x = 0;
        } else if (new_mouse_x > 1017) {
            new_mouse_x = 1017;
        }

        if (new_mouse_y < 0) {
            new_mouse_y = 0;
        } else if (new_mouse_y > 758) {
            new_mouse_y = 758;
        }

        MouseEvent* last_event = synchronized_queue_peek_last(queue);
        if (last_event != 0 && last_event->type == MouseDrag) {
            last_event->x += new_mouse_x - mouse_x;
            last_event->y += new_mouse_y - mouse_y;
        } else if (new_mouse_x - mouse_x != 0 || new_mouse_y - mouse_y != 0) {
            MouseEvent drag_event = {
                .type = MouseDrag,
                .x = new_mouse_x - mouse_x,
                .y = new_mouse_y - mouse_y,
            };
            synchronized_queue_put(queue, &drag_event);
        }

        if (!left_button && new_left_button) {
            MouseEvent left_click_event = {
                .type = MouseLeftClick,
                .x = new_mouse_x,
                .y = new_mouse_y,
            };
            synchronized_queue_put(queue, &left_click_event);
        }
        if (!right_button && new_right_button) {
            MouseEvent right_click_event = {
                .type = MouseRightClick,
                .x = new_mouse_x,
                .y = new_mouse_y,
            };
            synchronized_queue_put(queue, &right_click_event);
        }
        if (left_button && !new_left_button) {
            MouseEvent left_release_event = {
                .type = MouseLeftRelease,
                .x = new_mouse_x,
                .y = new_mouse_y,
            };
            synchronized_queue_put(queue, &left_release_event);
        }
        if (right_button && !new_right_button) {
            MouseEvent right_release_event = {
                .type = MouseRightRelease,
                .x = new_mouse_x,
                .y = new_mouse_y,
            };
            synchronized_queue_put(queue, &right_release_event);
        }
        left_button = new_left_button;
        right_button = new_right_button;
        mouse_x = new_mouse_x;
        mouse_y = new_mouse_y;
    }
}
