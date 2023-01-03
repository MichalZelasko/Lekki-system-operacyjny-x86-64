#ifndef WINDOWS_H
#define WINDOWS_H
#include <types.h>
#include <widget.h>

void handle_key_press(char key);
void init_windows(Widget* desktop, Widget* windows_container, Widget* bottom_bar);
Widget* create_window(uint8_t* icon, uint8_t* icon_bitmask);
Widget* create_window_proces(uint8_t* icon, uint8_t* icon_bitmask);
Widget* create_window_text_editor(uint8_t* icon, uint8_t* icon_bitmask);
Widget* create_window_file_menager(uint8_t* icon, uint8_t* icon_bitmask);

#endif
