#include <port.h>
#include <types.h>
#include <utils.h>
#include <windows.h>

static uint16_t command_port = 0x64;
static uint16_t data_port = 0x60;

void activate_keyboard() {
    while (port_read8(command_port) & 0x1) {
        port_read8(data_port);
    }
    port_write8(command_port, 0xae); // activate interrupts
    port_write8(command_port, 0x20); // command 0x20 = read controller command byte
    uint8_t status = (port_read8(data_port) | 1) & ~0x10;
    port_write8(command_port, 0x60); // command 0x60 = set controller command byte
    port_write8(data_port, status);
    port_write8(data_port, 0xf4);
}

void handle_keyboard_interrupt() {
    uint8_t key = port_read8(data_port);
    switch(key) {
        case 0x02: handle_key_press('1'); break;
        case 0x03: handle_key_press('2'); break;
        case 0x04: handle_key_press('3'); break;
        case 0x05: handle_key_press('4'); break;
        case 0x06: handle_key_press('5'); break;
        case 0x07: handle_key_press('6'); break;
        case 0x08: handle_key_press('7'); break;
        case 0x09: handle_key_press('8'); break;
        case 0x0A: handle_key_press('9'); break;
        case 0x0B: handle_key_press('0'); break;
        case 0x0E: handle_key_press('\b'); break;

        case 0x10: handle_key_press('q'); break;
        case 0x11: handle_key_press('w'); break;
        case 0x12: handle_key_press('e'); break;
        case 0x13: handle_key_press('r'); break;
        case 0x14: handle_key_press('t'); break;
        case 0x15: handle_key_press('y'); break;
        case 0x16: handle_key_press('u'); break;
        case 0x17: handle_key_press('i'); break;
        case 0x18: handle_key_press('o'); break;
        case 0x19: handle_key_press('p'); break;

        case 0x1E: handle_key_press('a'); break;
        case 0x1F: handle_key_press('s'); break;
        case 0x20: handle_key_press('d'); break;
        case 0x21: handle_key_press('f'); break;
        case 0x22: handle_key_press('g'); break;
        case 0x23: handle_key_press('h'); break;
        case 0x24: handle_key_press('j'); break;
        case 0x25: handle_key_press('k'); break;
        case 0x26: handle_key_press('l'); break;

        case 0x2C: handle_key_press('z'); break;
        case 0x2D: handle_key_press('x'); break;
        case 0x2E: handle_key_press('c'); break;
        case 0x2F: handle_key_press('v'); break;
        case 0x30: handle_key_press('b'); break;
        case 0x31: handle_key_press('n'); break;
        case 0x32: handle_key_press('m'); break;
        case 0x33: handle_key_press(','); break;
        case 0x34: handle_key_press('.'); break;
        case 0x35: handle_key_press('-'); break;

        case 0x1C: handle_key_press('\n'); break;
        case 0x39: handle_key_press(' '); break;

        default:
        {
            // char* foo = "KEYBOARD 0x00 ";
            // char* hex = "0123456789ABCDEF";
            // foo[11] = hex[(key >> 4) & 0xF];
            // foo[12] = hex[key & 0xF];
            // printf(foo);
            break;
        }
    }
};
