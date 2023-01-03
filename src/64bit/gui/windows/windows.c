#include <types.h>
#include <windows.h>
#include <widget.h>
#include <list.h>
#include <graphics_mode.h>
#include <event.h>
#include <image.h>
#include <x_icon.h>
#include <minus_icon.h>
#include <memory.h>
#include <maximize_icon.h>
#include <utils.h>
#include <add.h>
#include <add_bitmask.h>
#include <delete.h>
#include <delete_bitmask.h>
#include <utils.h>
#include <terminal_icon.h>
#include <terminal_bitmask.h>
#include <proces_small.h>
#include <proces_bitmask_small.h>
#include <folder_icon_small.h>
#include <folder_bitmask_small.h>
#include <user_task.h>
#include <user_task_bitmask.h>
#include <new.h>
#include <new_bitmask.h>
#include <save.h>
#include <save_bitmask.h>
#include <run.h>
#include <run_bitmask.h>
#include <filename_picture.h>
#include <filename_picture_bitmask.h>
#include <active.h>
#include <active_bitmask.h>
#include <active_white_bitmap.h>
#include <active_white_bitmask.h>
#include <active_text.h>
#include <active_text_bitmask.h>
#include <apostrophe_image.h>
#include <apostrophe_image_bitmask.h>
#include <A_big_image.h>
#include <A_big_image_bitmask.h>
#include <a_image.h>
#include <a_image_bitmask.h>
#include <bracket1_image.h>
#include <bracket1_image_bitmask.h>
#include <bracket2_image.h>
#include <bracket2_image_bitmask.h>
#include <B_big_image.h>
#include <B_big_image_bitmask.h>
#include <b_image.h>
#include <b_image_bitmask.h>
#include <comma_image.h>
#include <comma_image_bitmask.h>
#include <C_big_image.h>
#include <C_big_image_bitmask.h>
#include <c_image.h>
#include <c_image_bitmask.h>
#include <div_image.h>
#include <div_image_bitmask.h>
#include <dot_image.h>
#include <dot_image_bitmask.h>
#include <D_big_image.h>
#include <D_big_image_bitmask.h>
#include <d_image.h>
#include <d_image_bitmask.h>
#include <eight_image.h>
#include <eight_image_bitmask.h>
#include <equal_image.h>
#include <equal_image_bitmask.h>
#include <exclamation_image.h>
#include <exclamation_image_bitmask.h>
#include <E_big_image.h>
#include <E_big_image_bitmask.h>
#include <e_image.h>
#include <e_image_bitmask.h>
#include <five_image.h>
#include <five_image_bitmask.h>
#include <four_image.h>
#include <four_image_bitmask.h>
#include <F_big_image.h>
#include <F_big_image_bitmask.h>
#include <f_image.h>
#include <f_image_bitmask.h>
#include <G_big_image.h>
#include <G_big_image_bitmask.h>
#include <g_image.h>
#include <g_image_bitmask.h>
#include <H_big_image.h>
#include <H_big_image_bitmask.h>
#include <h_image.h>
#include <h_image_bitmask.h>
#include <I_big_image.h>
#include <I_big_image_bitmask.h>
#include <i_image.h>
#include <i_image_bitmask.h>
#include <J_big_image.h>
#include <J_big_image_bitmask.h>
#include <j_image.h>
#include <j_image_bitmask.h>
#include <K_big_image.h>
#include <K_big_image_bitmask.h>
#include <k_image.h>
#include <k_image_bitmask.h>
#include <L_big_image.h>
#include <L_big_image_bitmask.h>
#include <l_image.h>
#include <l_image_bitmask.h>
#include <minus_image.h>
#include <minus_image_bitmask.h>
#include <multi_image.h>
#include <multi_image_bitmask.h>
#include <M_big_image.h>
#include <M_big_image_bitmask.h>
#include <m_image.h>
#include <m_image_bitmask.h>
#include <nine_image.h>
#include <nine_image_bitmask.h>
#include <N_big_image.h>
#include <N_big_image_bitmask.h>
#include <n_image.h>
#include <n_image_bitmask.h>
#include <one_image.h>
#include <one_image_bitmask.h>
#include <O_big_image.h>
#include <O_big_image_bitmask.h>
#include <o_image.h>
#include <o_image_bitmask.h>
#include <plus_image.h>
#include <plus_image_bitmask.h>
#include <P_big_image.h>
#include <P_big_image_bitmask.h>
#include <p_image.h>
#include <p_image_bitmask.h>
#include <qmark_image.h>
#include <qmark_image_bitmask.h>
#include <Q_big_image.h>
#include <Q_big_image_bitmask.h>
#include <q_image.h>
#include <q_image_bitmask.h>
#include <R_big_image.h>
#include <R_big_image_bitmask.h>
#include <r_image.h>
#include <r_image_bitmask.h>
#include <semicolon_image.h>
#include <semicolon_image_bitmask.h>
#include <seven_image.h>
#include <seven_image_bitmask.h>
#include <six_image.h>
#include <six_image_bitmask.h>
#include <space_image.h>
#include <space_image_bitmask.h>
#include <strophe_image.h>
#include <strophe_image_bitmask.h>
#include <S_big_image.h>
#include <S_big_image_bitmask.h>
#include <s_image.h>
#include <s_image_bitmask.h>
#include <three_image.h>
#include <three_image_bitmask.h>
#include <twodot_image.h>
#include <twodot_image_bitmask.h>
#include <two_image.h>
#include <two_image_bitmask.h>
#include <T_big_image.h>
#include <T_big_image_bitmask.h>
#include <t_image.h>
#include <t_image_bitmask.h>
#include <U_big_image.h>
#include <U_big_image_bitmask.h>
#include <u_image.h>
#include <u_image_bitmask.h>
#include <V_big_image.h>
#include <V_big_image_bitmask.h>
#include <v_image.h>
#include <v_image_bitmask.h>
#include <W_big_image.h>
#include <W_big_image_bitmask.h>
#include <w_image.h>
#include <w_image_bitmask.h>
#include <X_big_image.h>
#include <X_big_image_bitmask.h>
#include <x_image.h>
#include <x_image_bitmask.h>
#include <Y_big_image.h>
#include <Y_big_image_bitmask.h>
#include <y_image.h>
#include <y_image_bitmask.h>
#include <zero_image.h>
#include <zero_image_bitmask.h>
#include <Z_big_image.h>
#include <Z_big_image_bitmask.h>
#include <z_image.h>
#include <z_image_bitmask.h>
#include <backslash.h>
#include <backslash_bitmask.h>
#include <malpa.h>
#include <malpa_bitmask.h>
#include <ampersant.h>
#include <bracket3.h>
#include <bracket4.h>
#include <bracket5.h>
#include <bracket6.h>
#include <dollar.h>
#include <hash.h>
#include <percent.h>
#include <power.h>
#include <underscore.h>
#include <ver_line.h>
#include <ampersant_bitmask.h>
#include <bracket3_bitmask.h>
#include <bracket4_bitmask.h>
#include <bracket5_bitmask.h>
#include <bracket6_bitmask.h>
#include <dollar_bitmask.h>
#include <hash_bitmask.h>
#include <percent_bitmask.h>
#include <power_bitmask.h>
#include <underscore_bitmask.h>
#include <ver_line_bitmask.h>
#include <command.h>
#include <command_bitmask.h>
#include <executables.h>
#include <open.h>
#include <open_bitmask.h>
#include <file_small.h>
#include <terminal_bitmask_small.h>

typedef struct {
    uint8_t is_maximized;
    uint8_t is_minimalized;    
    uint8_t is_dragged;
    int32_t last_top;
    int32_t last_bottom;
    int32_t last_left;
    int32_t last_right;
    Widget* widget;
    Widget* bottom_bar;
} Window;

List* windows;
Widget* windows_container;
Widget* bottom_bar;
uint32_t process_number;
uint32_t window_number = 0;
uint32_t process_window = 0;
uint32_t text_editor = 0;
uint32_t file_menager = 0;
Window* created;
Widget* window_widget;
char* current_filename;
char* current_text;
int counter = 0;

Window* created_text_editor;
Window* created_file_menager;
Widget* window_text_editor;
Widget* window_file_menager;
Widget* field_text_editor;
Widget* field_file_menager;


Widget* functional_bar_text_editor;
Widget* command_bar_file_menager;
Widget* result_bar_text_editor;
Widget** letter_widgets;

uint32_t result_bar_position = 0;
uint32_t result_text_editor_position = 0;

char* text_editor_content;
int32_t text_editor_content_count = 0;

char* file_name_content;
int32_t file_name_content_count = 0;

char* command_content;
int32_t command_content_count = 0;

uint8_t big_letter = 1;

uint8_t active_text_field = 4;

uint8_t return_value_exec = 0;

char* result_text;

char **filenames;
char *filename_menager_text;
uint32_t files_count = 0;
uint32_t deleted_files = 0;

typedef struct File {
    char* filename;
    uint32_t filename_count;
    uint32_t is_deleted;
    char* content;
    uint32_t content_count;
} File;

static void create_result_bar_proces(Widget* parent, Window* window);
static void create_functional_icons_text_editor(Widget* functional_bar_ptr, Window* window);
static void create_result_field_text_editor(Widget* parent, Window* window);
void print_text_editor(Widget* parent, Window* window, char* text_to_print, uint32_t counter, uint32_t position_y, uint32_t position_x, uint32_t position_max, uint32_t do_show, uint8_t do_big);
void create_filename_bar_text_editor(Widget* parent, Window* window);
void create_command_bar_file_menager(Widget* parent, Window* window);
void create_result_bar_text_editor(Widget* parent, Window* window);
void create_line(Widget* parent, Window* window, uint32_t line_position, uint32_t is_white);
void create_result_field_file_menager(Widget* parent, Window* window);
void initiate_filenames();

void fill_file(File* file_struct, char* filename, char* content) {
    file_struct->filename = filename;
    file_struct->is_deleted = 0;
    file_struct->content = content;
    file_struct->filename_count = file_name_content_count;
    file_struct->content_count = text_editor_content_count;
}

File** files_in_system;

void init_windows(Widget* desktop, Widget* windows_container_ptr, Widget* bottom_bar_ptr) {
    bottom_bar = bottom_bar_ptr;
    windows_container = windows_container_ptr;
    text_editor_content = malloc(sizeof(char) * 5000);
    file_name_content = malloc(sizeof(char) * 256);
    command_content = malloc(sizeof(char) * 256);
    result_text = malloc(sizeof(char) * 24);
    files_in_system = malloc(sizeof(File*) * 1024);
    for(int i = 0; i < 1024; i++) {
        files_in_system[i] = malloc(sizeof(File));
    }
    windows = list_create();
    initiate_filenames();
}

char getHex(uint8_t a) {
    if(a >= 0 && a <= 9) {
        return 48 + a;
    }
    else {
        switch(a) {
            case 10 : return 'a';
            case 11 : return 'b';
            case 12 : return 'c';
            case 13 : return 'd';
            case 14 : return 'e';
            case 15 : return 'f';
        }
    }
    return 'E';
}

uint8_t getValueFromHex(char a) {
    if(a >= 48 && a <= 57) {
        return a - 48;
    }
    else {
        switch(a) {
            case 'a' : return 10;
            case 'b' : return 11;
            case 'c' : return 12;
            case 'd' : return 13;
            case 'e' : return 14;
            case 'f' : return 15;
            case 'A' : return 10;
            case 'B' : return 11;
            case 'C' : return 12;
            case 'D' : return 13;
            case 'E' : return 14;
            case 'F' : return 15;
        }
    }
    return 0;
}

void fill_with_result() {
    result_text[0] = 'r';
    result_text[1] = 'e';
    result_text[2] = 's';
    result_text[3] = 'u';
    result_text[4] = 'l';
    result_text[5] = 't';
    result_text[6] = ' ';
    result_text[7] = '=';
    result_text[8] = ' ';
    result_text[9] = '0';
    result_text[10] = 'x';
    result_text[11] = getHex((return_value_exec / 16) % 16);
    result_text[12] = getHex(return_value_exec % 16);
    for(int i = 13; i < 24; i++) {
        result_text[i] = ' ';
    }
}

uint32_t code_size_text_editor;
uint8_t *program;

void translate_to_byte(uint32_t count) {
    code_size_text_editor = 0; 
    uint8_t current_byte;   
    if(count % 3 == 2) count++;
    if(count % 3 == 1) count += 2;
    program = malloc(sizeof(uint8_t) * (count / 3 + 3));
    for(int i = 0; i < count; i = i + 3) {
        current_byte = getValueFromHex(text_editor_content[i]);
        current_byte = current_byte * 16 + getValueFromHex(text_editor_content[i + 1]);
        program[code_size_text_editor] = current_byte;
        code_size_text_editor++;
    }
}

void handle_key_press(char key) {
    if(active_text_field < 0 || active_text_field > 2) return;
    if(active_text_field == 0) {
        if (key == '\b') {
            text_editor_content_count--;
            if(text_editor_content_count < 0) {
                text_editor_content_count = 0;
                return;
            }
        }
        else {
            text_editor_content[text_editor_content_count] = key;
            text_editor_content_count++;
        }
        widget_pop(field_text_editor);
        create_result_field_text_editor(window_text_editor, created_text_editor); 
        print_text_editor(field_text_editor, created_text_editor, text_editor_content, text_editor_content_count, 6, 12, 700, 1, 1);
    }
    else if(active_text_field == 1) {
        if (key == '\b') {
            file_name_content_count--;
            if(file_name_content_count < 0) {
                file_name_content_count = 0;
                return;
            }
        }
        else {
            file_name_content[file_name_content_count] = key;
            file_name_content_count++;
        }
        widget_pop(functional_bar_text_editor);
        create_filename_bar_text_editor(window_text_editor, created_text_editor); 
        print_text_editor(functional_bar_text_editor, created_text_editor, file_name_content, file_name_content_count, 1, 132, 700, 0, 0);
    }
    else if(active_text_field == 2) {
        if (key == '\b') {
            command_content_count--;
            if(command_content_count < 0) {
                command_content_count = 0;
                return;
            }
        }
        else {
            command_content[command_content_count] = key;
            command_content_count++;
        }
        widget_pop(command_bar_file_menager);
        create_command_bar_file_menager(window_file_menager, created_file_menager); 
        print_text_editor(command_bar_file_menager, created_file_menager, command_content, command_content_count, 1, 132, 700, 0, 0);
    }
}

static void handle_minimalize_window(Widget* widget, Event* event) {    
    Window* window = widget->extra_data;
    window->widget->is_hidden = 1;
    window->is_minimalized = 1;
    event_stop_propagation(event);
    active_text_field = 4;
} 

static void handle_close_window_general(Widget* widget, Event* event) {
    Window* window = widget->extra_data;
    Widget* window_widget = window->widget;
    Widget* title_bar = list_get(window_widget->children, 0); 
    Widget* bottom_bar = window->bottom_bar;
    widget_destroy(window_widget);
    list_pop(windows, list_find_index(windows, window));
    int32_t window_icon_index = -1;
    for(int32_t i = 0; i < bottom_bar->children->length; i++) {
       Widget* icon = list_get(bottom_bar->children, i);
       if (window_icon_index != -1) {
           widget_set_left(icon, icon->style.left - 58);
       }
       if (icon->extra_data == window) {
           icon->extra_data = 0;
           window_icon_index = i;
       }
    }
    widget_destroy(list_get(bottom_bar->children, window_icon_index));
    remove_drag_observer(title_bar);
    remove_release_observer(title_bar);
    event_stop_propagation(event);
}

static void handle_close_window(Widget* widget, Event* event) {
    if(window_number > 0) window_number--;
    handle_close_window_general(widget, event);
}

static void handle_close_window_process(Widget* widget, Event* event) {
    process_window = 0;
    result_bar_position = 0;
    result_text_editor_position = 0;
    handle_close_window_general(widget, event);
}

static void handle_close_text_editor(Widget* widget, Event* event) {
    text_editor = 0;
    result_bar_position = 0;
    //result_text_editor_position = 0;
    handle_close_window_general(widget, event);
    active_text_field = 4;
    file_name_content_count = 0;
    text_editor_content = 0;
}

static void handle_close_file_menager(Widget* widget, Event* event) {
    file_menager = 0;
    active_text_field = 4;
    handle_close_window_general(widget, event);
}

static void handle_add_process() {
    process_number++;
    if(process_number > 6) {
        process_number = 6;
    }
    create_result_bar_proces(window_widget, created);
}

static void handle_delete_process() {
    if(process_number > 0) process_number--;
    create_result_bar_proces(window_widget, created);
}

static void handle_new_file() {    
    counter = 0;
    //current_filename = "newfile";
    create_result_field_text_editor(window_text_editor, created_text_editor);
    file_name_content_count = 0;
    //print_text_editor(functional_bar_text_editor, created_text_editor, current_filename, 7, 1, 132, 700, 0, 0);
    active_text_field = 0;
}

uint32_t is_writen = 0;

uint32_t compare(char *text1, char* text2, uint32_t counter) {
    if(file_name_content_count != counter) {
        return 0;
    }
    for(int i = 0; i < file_name_content_count; i++) {
        if(text1[i] != text2[i]) {
            return 0;
        }
    }
    return 1;
}

uint32_t compare2(char *text1, char* text2, uint32_t counter_1, uint32_t counter_2) {
    if(counter_1 != counter_2) {
        return 0;
    }
    for(int i = 0; i < counter_1; i++) {
        if(text1[i] != text2[i]) {
            return 0;
        }
    }
    return 1;
}


static void save_file() {
    int32_t index = -1;
    for(int i = 0; i < files_count; i++) {
        if(compare2(file_name_content, files_in_system[i]->filename, file_name_content_count, files_in_system[i]->filename_count) && !files_in_system[i]->is_deleted) {
            index = i;
            break;
        }
    }
    if(index == -1) {
        files_in_system[files_count] = malloc(sizeof(File));
        fill_file(files_in_system[files_count], file_name_content, text_editor_content);
        files_count++;
    }
    else {
        files_in_system[index] = malloc(sizeof(File));
        fill_file(files_in_system[index], file_name_content, text_editor_content);
    }    
}

static void open_file(char* open_filename, uint32_t count) {    
    create_window_text_editor(file_small, terminal_bitmask_small);
    int32_t index = -1;
    for(int i = 0; i < files_count; i++) {
        if(compare2(open_filename, files_in_system[i]->filename, count, files_in_system[i]->filename_count)) {
            index = i;
            break;
        }
    }
    if(index == -1) {
        file_name_content = "";
        file_name_content_count = 0;
        text_editor_content = "";
        text_editor_content_count = 0;
    }
    else {
        file_name_content = files_in_system[index]->filename;
        file_name_content_count = files_in_system[index]->filename_count;
        text_editor_content = files_in_system[index]->content;
        text_editor_content_count = files_in_system[index]->content_count;
    }
    create_result_field_text_editor(window_text_editor, created_text_editor);
    print_text_editor(field_text_editor, created_text_editor, text_editor_content, text_editor_content_count, 6, 12, 700, 0, 1);
    create_filename_bar_text_editor(window_text_editor, created_text_editor); 
    print_text_editor(functional_bar_text_editor, created_text_editor, file_name_content, file_name_content_count, 1, 132, 700, 0, 0);
}

static void delete_file(char* open_filename, uint32_t count) {
    int32_t index = -1;
    for(int i = 0; i < files_count; i++) {
        if(compare2(open_filename, files_in_system[i]->filename, count, files_in_system[i]->filename_count) && !files_in_system[i]->is_deleted) {
            index = i;
            break;
        }
    }
    if(index == -1) {
        return;
    }
    else {
        files_in_system[index]->is_deleted = 1;
        deleted_files += 1;
    }
}

static void handle_save_file() {
    //current_filename = "saved_file";
    //print_text_editor(functional_bar_text_editor, created_text_editor, current_filename, 10, 1, 132, 700, 0, 0);
    active_text_field = 0;
    save_file();
}

static void handle_run_file() {
    translate_to_byte(text_editor_content_count);
    return_value_exec = load_executable_handler_function(code_size_text_editor, program);
    //return_value_exec = load_executable_handler();
    create_result_bar_text_editor(window_text_editor, created_text_editor);
}

static void handle_filename_input() {
    if(active_text_field == 0) active_text_field = 1;
    else active_text_field = 0;
}

static void interpret_command() {
    uint32_t i = 0;
    char* filename = malloc(256 * sizeof(char));
    while(i < command_content_count && command_content[i] != ' ') {
        i++;
    }
    i++;
    uint32_t j = 0;
    while(i < command_content_count) {
        filename[j] = command_content[i];
        i++;
        j++;
    }
    if(command_content[0] == 'c') {
        int32_t index = -1;
        for(int i = 0; i < files_count; i++) {
            if(compare2(filename, files_in_system[i]->filename, j, files_in_system[i]->filename_count) && !files_in_system[i]->is_deleted) {
                index = i;
                break;
            }
        }
        if(index == -1) {
            files_in_system[files_count] = malloc(sizeof(File));
            fill_file(files_in_system[files_count], filename, "");
            files_in_system[files_count]->filename_count = j;
            files_in_system[files_count]->content_count = 0;
            files_count++;
        }
        else {
            return;
        }        
    }
    if(command_content[0] == 'o') {
        open_file(filename, j);
        active_text_field = 0;
    }
    if(command_content[0] == 'd') {
        delete_file(filename, j);
    }
    create_result_field_file_menager(window_file_menager, created_file_menager);
}

static void handle_command_input() {
    if(active_text_field == 2) {
        interpret_command();
    }
    else {
        active_text_field = 2;
    }
}

static void handle_maximizing_window(Widget* widget, Event* event) {
    Window* window = widget->extra_data;
    Widget* window_widget = window->widget;
    event_stop_propagation(event);
    if (window->is_maximized) {
        widget_set_top(window_widget, window->last_top);
        widget_set_bottom(window_widget, window->last_bottom);
        widget_set_left(window_widget, window->last_left);
        widget_set_right(window_widget, window->last_right);
        window->is_maximized = 0;
        return;
    }
    window->last_bottom = window_widget->style.bottom;
    window->last_top = window_widget->style.top;
    window->last_left = window_widget->style.left;
    window->last_right = window_widget->style.right;
    widget_set_top(window_widget, 0);
    widget_set_bottom(window_widget, 0);
    widget_set_left(window_widget, 0);
    widget_set_right(window_widget, 0);
    window->is_maximized = 1;
}

static void handle_title_bar_click(Widget* widget, Event* event) {
    Widget* window_widget = widget->parent;
    Window* window = window_widget->extra_data;
    window->is_dragged = 1;
}

static void handle_title_bar_click_file_menager(Widget* widget, Event* event) {
    Widget* window_widget = widget->parent;
    Window* window = window_widget->extra_data;
}

static void handle_window_drag(Widget* widget, Event* event) {
    Widget* window_widget = widget->parent;
    Window* window = window_widget->extra_data;

    if (window->is_dragged) {
        widget_set_left(window_widget, window_widget->style.left + event->mouse_x);
        widget_set_right(window_widget, window_widget->style.right - event->mouse_x);
        widget_set_top(window_widget, min(window_widget->style.top + event->mouse_y, SCREEN_HEIGHT - 65 - 30));
        widget_set_bottom(window_widget, window_widget->style.bottom - event->mouse_y);
    }
}

static void handle_file_menager_drag(Widget* widget, Event* event) {
    Widget* window_widget = widget->parent;
    Window* window = window_widget->extra_data;
}

static void handle_title_bar_release(Widget* widget, Event* event) {
    Widget* window_widget = widget->parent;
    Window* window = window_widget->extra_data;
    window->is_dragged = 0;
}

static void create_title_bar_icons(Widget* title_bar_ptr, Window* window, void (*close_function)(struct Widget* widget, Event* event)) {
    Widget* x_icon_widget = malloc(sizeof(Widget));
    Widget* maximize_icon_widget = malloc(sizeof(Widget));
    Widget* minus_icon_widget = malloc(sizeof(Widget));
    image_create(x_icon_widget, 10, 10, x_icon, x_icon);
    image_create(maximize_icon_widget, 10, 10, maximize_icon, maximize_icon);
    image_create(minus_icon_widget, 10, 10, minus_icon, minus_icon);
    widget_append_child(title_bar_ptr, x_icon_widget);
    widget_append_child(title_bar_ptr, maximize_icon_widget);
    widget_append_child(title_bar_ptr, minus_icon_widget);
    x_icon_widget->extra_data = window;
    maximize_icon_widget->extra_data = window;
    minus_icon_widget->extra_data = window;
    x_icon_widget->style.position = PositionAbsolute;
    maximize_icon_widget->style.position = PositionAbsolute;
    minus_icon_widget->style.position = PositionAbsolute;
    widget_set_top(x_icon_widget, 10);
    widget_set_top(maximize_icon_widget, 10);
    widget_set_top(minus_icon_widget, 10);
    widget_set_right(x_icon_widget, 10);
    widget_set_right(maximize_icon_widget, 35);
    widget_set_right(minus_icon_widget, 60);
    x_icon_widget->on_mouse_down = close_function;
    maximize_icon_widget->on_mouse_down = handle_maximizing_window;
    minus_icon_widget->on_mouse_down = handle_minimalize_window;
}

static void create_functional_icons_proces(Widget* functional_bar_ptr, Window* window) {
    Widget* add_widget = malloc(sizeof(Widget));
    Widget* remove_widget = malloc(sizeof(Widget));
    Widget* is_active_widget = malloc(sizeof(Widget));
    image_create(add_widget, 48, 48, add, add_bitmask);
    image_create(remove_widget, 48, 48, delete, delete_bitmask);
    image_create(is_active_widget, 89, 26, active_text, active_text_bitmask);
    widget_append_child(functional_bar_ptr, add_widget);
    widget_append_child(functional_bar_ptr, remove_widget);
    widget_append_child(functional_bar_ptr, is_active_widget);
    add_widget->extra_data = window;
    remove_widget->extra_data = window;
    is_active_widget->extra_data = window;
    add_widget->style.position = PositionRelative;
    remove_widget->style.position = PositionRelative;
    is_active_widget->style.position = PositionRelative;
    widget_set_top(add_widget, 10);
    widget_set_top(remove_widget, -38);
    widget_set_top(is_active_widget, -54);
    widget_set_right(add_widget, -10);
    widget_set_right(remove_widget, -68);
    widget_set_right(is_active_widget, -638);
    add_widget->on_mouse_down = handle_add_process;
    remove_widget->on_mouse_down = handle_delete_process;
}

static void create_functional_icons_text_editor(Widget* functional_bar_ptr, Window* window) {
    Widget* new_widget = malloc(sizeof(Widget));
    Widget* save_widget = malloc(sizeof(Widget));
    Widget* run_widget = malloc(sizeof(Widget));
    image_create(new_widget, 48, 48, new_bitmap, new_bitmask);
    image_create(save_widget, 48, 48, save, save_bitmask);
    image_create(run_widget, 48, 48, run, run_bitmask);
    widget_append_child(functional_bar_ptr, new_widget);
    widget_append_child(functional_bar_ptr, save_widget);
    widget_append_child(functional_bar_ptr, run_widget);
    new_widget->extra_data = window;
    save_widget->extra_data = window;
    run_widget->extra_data = window;
    new_widget->style.position = PositionRelative;
    save_widget->style.position = PositionRelative;
    run_widget->style.position = PositionRelative;
    widget_set_top(new_widget, 10);
    widget_set_top(save_widget, -38);
    widget_set_top(run_widget, -86);
    widget_set_right(new_widget, -10);
    widget_set_right(save_widget, -68);
    widget_set_right(run_widget, -116);
    new_widget->on_mouse_down = handle_new_file;
    save_widget->on_mouse_down = handle_save_file;
    run_widget->on_mouse_down = handle_run_file;
}

static void create_filename_icons_text_editor(Widget* functional_bar_ptr, Window* window) {
    Widget* filename_icon = malloc(sizeof(Widget));
    image_create(filename_icon, 125, 26, filename_picture, filename_picture_bitmask);
    widget_append_child(functional_bar_ptr, filename_icon);
    filename_icon->extra_data = window;
    filename_icon->style.position = PositionRelative;
    widget_set_top(filename_icon, 5);
    filename_icon->on_mouse_down = handle_filename_input;
}

static void create_command_icons_file_menager(Widget* functional_bar_ptr, Window* window) {
    Widget* command_icon = malloc(sizeof(Widget));
    image_create(command_icon, command_width, command_height, command_bitmap, command_bitmask);
    widget_append_child(functional_bar_ptr, command_icon);
    command_icon->extra_data = window;
    command_icon->style.position = PositionRelative;
    widget_set_top(command_icon, 5);
    command_icon->on_mouse_down = handle_command_input;
}

static void create_proces_name_icon(Widget* functional_bar_ptr, Window* window, uint32_t name_diff, uint32_t do_white) {
    Widget* name_widget = malloc(sizeof(Widget));
    if(do_white) {
        image_create(name_widget, 500, 48, user_task_bitmask, user_task_bitmask);
    }
    else {
        image_create(name_widget, 500, 48, user_task, user_task_bitmask);
    }
    widget_append_child(functional_bar_ptr, name_widget);
    name_widget->style.position = PositionAbsolute;
    widget_set_top(name_widget, name_diff);
    widget_set_right(name_widget, -512);
}

static void create_active_proces_icon(Widget* functional_bar_ptr, Window* window, uint32_t name_diff, uint32_t do_white) {
    Widget* active_widget = malloc(sizeof(Widget));
    if(do_white) {
        image_create(active_widget, 48, 48, active_white_bitmask, active_white_bitmask);
    }
    else {
        image_create(active_widget, 48, 48, active, active_bitmask);
    }
    widget_append_child(functional_bar_ptr, active_widget);
    active_widget->style.position = PositionAbsolute;
    widget_set_top(active_widget, name_diff - 3);
    widget_set_right(active_widget, -632);
}

static void handle_empty_text_editor() {
    create_window_text_editor(file_small, terminal_bitmask_small);
    active_text_field = 0;
}

static void handle_exec1_text_editor() {
    create_window_text_editor(file_small, terminal_bitmask_small);
    text_editor_content = "48 C7 C3 05 00 00 00 48 C7 C1 03 00 00 00 48 C7 C0 01 00 00 00 48 F7 E3 E2 FB";
    text_editor_content_count = 78;
    file_name_content = "powers";
    file_name_content_count = 6;
    create_result_field_text_editor(window_text_editor, created_text_editor);
    print_text_editor(field_text_editor, created_text_editor, text_editor_content, text_editor_content_count, 6, 12, 700, 0, 1);
    create_filename_bar_text_editor(window_text_editor, created_text_editor); 
    print_text_editor(functional_bar_text_editor, created_text_editor, file_name_content, file_name_content_count, 1, 132, 700, 0, 0);
    active_text_field = 0;
}

static void handle_exec2_text_editor() {
    create_window_text_editor(file_small, terminal_bitmask_small);
    text_editor_content = "48 C7 C3 05 00 00 00 48 C7 C0 03 00 00 00 48 01 D8";
    text_editor_content_count = 51;
    file_name_content = "three_plus_five";
    file_name_content_count = 16;
    create_result_field_text_editor(window_text_editor, created_text_editor);
    print_text_editor(field_text_editor, created_text_editor, text_editor_content, text_editor_content_count, 6, 12, 700, 0, 1);
    create_filename_bar_text_editor(window_text_editor, created_text_editor); 
    print_text_editor(functional_bar_text_editor, created_text_editor, file_name_content, file_name_content_count, 1, 132, 700, 0, 0);
    active_text_field = 0;
}

static void create_result_icons_file_menager(Widget* result_bar_ptr, Window* window, uint32_t count_files) {
    int32_t start_position = -30;
    create_line(result_bar_ptr, window, start_position, 0);
    for(int i = 0; i < count_files - deleted_files; i++) {
        Widget* open_widget = malloc(sizeof(Widget));
        image_create(open_widget, 100, 36, open, open_bitmask);
        widget_append_child(result_bar_ptr, open_widget);
        open_widget->extra_data = window;
        open_widget->style.position = PositionAbsolute;
        widget_set_top(open_widget, start_position);
        widget_set_left(open_widget, 600);
        start_position += 36;
        create_line(result_bar_ptr, window, start_position, 0);
        open_widget->on_mouse_down = handle_empty_text_editor;
        if(i == 0) open_widget->on_mouse_down = handle_exec1_text_editor;
        if(i == 3) open_widget->on_mouse_down = handle_exec2_text_editor;
    }    
}

static void create_result_icons_proces(Widget* result_bar_ptr, Window* window) {
    uint32_t start_position = 10;
    if(text_editor) {
        Widget* folder_widget = malloc(sizeof(Widget));
        image_create(folder_widget, 48, 48, save, save_bitmask);
        widget_append_child(result_bar_ptr, folder_widget);
        folder_widget->extra_data = window;
        folder_widget->style.position = PositionAbsolute;
        widget_set_top(folder_widget, start_position);
        widget_set_right(folder_widget, 12);
        create_proces_name_icon(result_bar_ptr, window, start_position + 2, 0);
        create_active_proces_icon(result_bar_ptr, window, start_position + 2, 1);
        start_position += 58; 
    }

    if(window_number || file_menager) {
        Widget* folder_widget = malloc(sizeof(Widget));
        image_create(folder_widget, 48, 48, folder_bitmap_small, folder_bitmask_small);
        widget_append_child(result_bar_ptr, folder_widget);
        folder_widget->extra_data = window;
        folder_widget->style.position = PositionAbsolute;
        widget_set_top(folder_widget, start_position);
        widget_set_right(folder_widget, 12);
        create_proces_name_icon(result_bar_ptr, window, start_position + 2, 0);
        create_active_proces_icon(result_bar_ptr, window, start_position + 2, 1);
        start_position += 58;        
    }
    
    if(process_window) {
        Widget* proces_icon_widget = malloc(sizeof(Widget));    
        image_create(proces_icon_widget, 48, 48, proces_small, proces_bitmask_small);    
        widget_append_child(result_bar_ptr, proces_icon_widget);    
        proces_icon_widget->extra_data = window;    
        proces_icon_widget->style.position = PositionAbsolute;    
        widget_set_top(proces_icon_widget, start_position);    
        widget_set_right(proces_icon_widget, 12);
        create_proces_name_icon(result_bar_ptr, window, start_position + 2, 0);
        create_active_proces_icon(result_bar_ptr, window, start_position + 2, 0);
        start_position += 58;        
    }

    Widget** userProcess = malloc(process_number * sizeof(Widget*));
    for(int i = 0; i < process_number; i++) {
        userProcess[i] = malloc(sizeof(Widget));
        image_create(userProcess[i], 48, 48, terminal_bitmap, terminal_bitmask);    
        widget_append_child(result_bar_ptr, userProcess[i]);    
        userProcess[i]->extra_data = window;    
        userProcess[i]->style.position = PositionAbsolute;    
        widget_set_top(userProcess[i], start_position);    
        widget_set_right(userProcess[i], 12);
        create_proces_name_icon(result_bar_ptr, window, start_position + 2, 0);
        create_active_proces_icon(result_bar_ptr, window, start_position + 2, 0);
        start_position += 58;        
    }
    for(int i = process_number; i < 6; i++) {
        create_proces_name_icon(result_bar_ptr, window, start_position + 2, 1);
        create_active_proces_icon(result_bar_ptr, window, start_position + 2, 1);
        start_position += 58;
    }
}

void create_title_bar(Widget* parent, Window* window, void (*close_function)(struct Widget* widget, Event* event)) {
    Widget* title_bar = malloc(sizeof(Widget));
    init_widget(title_bar);
    widget_append_child(parent, title_bar); 
    title_bar->style.background_color = 0x000001;
    title_bar->style.position = PositionRelative;
    title_bar->extra_data = window;
    title_bar->on_mouse_down = handle_title_bar_click;
    title_bar->on_mouse_up = handle_title_bar_release;
    title_bar->on_mouse_move = handle_window_drag;
    widget_set_height(title_bar, 30);
    add_drag_observer(title_bar);
    add_release_observer(title_bar);
    create_title_bar_icons(title_bar, window, close_function);
}

void create_title_bar_file_menager(Widget* parent, Window* window, void (*close_function)(struct Widget* widget, Event* event)) {
    Widget* title_bar = malloc(sizeof(Widget));
    init_widget(title_bar);
    widget_append_child(parent, title_bar); 
    title_bar->style.background_color = 0x000001;
    title_bar->style.position = PositionRelative;
    title_bar->extra_data = window;
    title_bar->on_mouse_down = handle_title_bar_click_file_menager;
    title_bar->on_mouse_up = handle_title_bar_release;
    title_bar->on_mouse_move = handle_window_drag;
    widget_set_height(title_bar, 30);
    add_drag_observer(title_bar);
    add_release_observer(title_bar);
    create_title_bar_icons(title_bar, window, close_function);
}

void create_functional_bar_proces(Widget* parent, Window* window) {
    Widget* functional_bar = malloc(sizeof(Widget));
    init_widget(functional_bar);
    widget_append_child(parent, functional_bar); 
    functional_bar->style.background_color = 0x888888;
    functional_bar->style.position = PositionRelative;
    functional_bar->extra_data = window;
    widget_set_height(functional_bar, 68);
    create_functional_icons_proces(functional_bar, window);
}

void create_functional_bar_text_editor(Widget* parent, Window* window) {
    Widget* functional_bar = malloc(sizeof(Widget));
    init_widget(functional_bar);
    widget_append_child(parent, functional_bar); 
    functional_bar->style.background_color = 0x888888;
    functional_bar->style.position = PositionRelative;
    functional_bar->extra_data = window;
    widget_set_height(functional_bar, 68);
    create_functional_icons_text_editor(functional_bar, window);
}

void create_line(Widget* parent, Window* window, uint32_t line_position, uint32_t is_white) {
    Widget* line_bar = malloc(sizeof(Widget));
    init_widget(line_bar);
    widget_append_child(parent, line_bar); 
    line_bar->style.background_color = 0x444444;
    if(is_white) line_bar->style.background_color = 0x000000;
    line_bar->style.position = PositionAbsolute;
    line_bar->extra_data = window;
    widget_set_top(line_bar, line_position);
    widget_set_height(line_bar, 2);
}

void create_filename_bar_text_editor(Widget* parent, Window* window) {
    functional_bar_text_editor = malloc(sizeof(Widget));
    init_widget(functional_bar_text_editor);
    widget_append_child(parent, functional_bar_text_editor); 
    functional_bar_text_editor->style.background_color = 0xdddddd;
    functional_bar_text_editor->style.position = PositionAbsolute;
    functional_bar_text_editor->extra_data = window;
    widget_set_height(functional_bar_text_editor, 36);
    create_filename_icons_text_editor(functional_bar_text_editor, window);
    create_line(parent, window, 96, 0);
    create_line(parent, window, 132, 0);
}

void create_result_bar_text_editor(Widget* parent, Window* window) {
    uint32_t top_y = 460;
    result_bar_text_editor = malloc(sizeof(Widget));
    init_widget(result_bar_text_editor);
    widget_append_child(parent, result_bar_text_editor); 
    result_bar_text_editor->style.background_color = 0xffffee;
    result_bar_text_editor->style.position = PositionAbsolute;
    result_bar_text_editor->extra_data = window;
    widget_set_top(result_bar_text_editor, top_y);
    widget_set_height(result_bar_text_editor, 36);
    create_line(parent, window, top_y, 0);
    create_line(parent, window, top_y + 36, 0);
    fill_with_result();
    print_text_editor(result_bar_text_editor, created_file_menager, result_text, 24, 1, 12, 700, 0, 0);
}

void create_command_bar_file_menager(Widget* parent, Window* window) {
    command_bar_file_menager = malloc(sizeof(Widget));
    init_widget(command_bar_file_menager);
    widget_append_child(parent, command_bar_file_menager); 
    command_bar_file_menager->style.background_color = 0xdddddd;
    command_bar_file_menager->style.position = PositionAbsolute;
    command_bar_file_menager->extra_data = window;
    widget_set_height(command_bar_file_menager, 36);
    create_command_icons_file_menager(command_bar_file_menager, window);
}

uint32_t bar_pos_difference = 470;

void create_result_bar_proces(Widget* parent, Window* window) {
    Widget* result_bar = malloc(sizeof(Widget));
    init_widget(result_bar);
    widget_append_child(parent, result_bar); 
    result_bar->style.background_color = 0xdddddd;
    result_bar->style.position = PositionAbsolute;
    result_bar->extra_data = window;
    widget_set_top(result_bar, 98);//result_bar_position);
    widget_set_width(result_bar, 72);
    widget_set_height(result_bar, bar_pos_difference);
    create_result_icons_proces(result_bar, window);
    result_bar_position -= bar_pos_difference;
    for(int i = 0; i < 7; i++) {
        create_line(parent, window, 160 + i * 58, 0);
    }
}

void create_separation_bar_proces(Widget* parent, Window* window) {
    Widget* separation_bar = malloc(sizeof(Widget));
    init_widget(separation_bar);
    widget_append_child(parent, separation_bar); 
    separation_bar->style.background_color = 0x444444;
    separation_bar->style.position = PositionAbsolute;
    separation_bar->extra_data = window;
    widget_set_top(separation_bar, 30);
    widget_set_right(separation_bar, -636);
    widget_set_width(separation_bar, 2);
    widget_set_height(separation_bar, bar_pos_difference + 68);
    result_bar_position -= bar_pos_difference;
}

uint32_t text_editor_position = 470;
uint32_t file_menager_position = 470;

void create_result_field_text_editor(Widget* parent, Window* window) {
    field_text_editor = malloc(sizeof(Widget));
    init_widget(field_text_editor);
    widget_append_child(parent, field_text_editor); 
    field_text_editor->style.background_color = 0xffffff;
    field_text_editor->style.position = PositionAbsolute;
    field_text_editor->extra_data = window;
    widget_set_top(field_text_editor, 134);
    widget_set_height(field_text_editor, text_editor_position);
    create_result_bar_text_editor(parent, window);
}

uint32_t prepare_text() {
    uint32_t j = 0;
    uint32_t k = 7;
    filename_menager_text[0] = 'P';
    filename_menager_text[1] = 'L';
    filename_menager_text[2] = 'I';
    filename_menager_text[3] = 'K';
    filename_menager_text[4] = 'I';
    filename_menager_text[5] = ':';
    filename_menager_text[6] = '\n';
    for(int i = 0; i < files_count; i++) {
        if(!files_in_system[i]->is_deleted) {
            j = 0;
            while(j < files_in_system[i]->filename_count) {
                filename_menager_text[k] = files_in_system[i]->filename[j];
                j++;
                k++;
            }
            filename_menager_text[k] = '\n';
            k++;
        }        
    }
    return k;
}

void create_result_field_file_menager(Widget* parent, Window* window) {
    field_file_menager = malloc(sizeof(Widget));
    init_widget(field_file_menager);
    widget_append_child(parent, field_file_menager); 
    field_file_menager->style.background_color = 0xffffff;
    field_file_menager->style.position = PositionAbsolute;
    field_file_menager->extra_data = window;
    widget_set_top(field_file_menager, 134);
    widget_set_height(field_file_menager, file_menager_position);
    uint32_t filenames_length_count = prepare_text();
    print_text_editor(field_file_menager, window, filename_menager_text, filenames_length_count, -62, 12, 500, 0, 0);
    create_result_icons_file_menager(field_file_menager, window, files_count);
}

uint32_t letter_to_color(char letter) {
    if(letter < 32) {
        return 0x000000;
    }
    uint32_t value = letter - 31;
    return (value * 0xffffff) / 96;
}

uint8_t* getBitmap(char letter, uint32_t* width, uint32_t* height, uint8_t* bitmap) {
    switch(letter) {
        case '0' : (*width) = zero_width; (*height) = 33; return zero_bitmap;
        case '1' : (*width) = one_width; (*height) = 33; return one_bitmap;
        case '2' : (*width) = two_width; (*height) = 33; return two_bitmap;
        case '3' : (*width) = three_width; (*height) = 33; return three_bitmap;
        case '4' : (*width) = four_width; (*height) = 33; return four_bitmap;
        case '5' : (*width) = five_width; (*height) = 33; return five_bitmap;
        case '6' : (*width) = six_width; (*height) = 33; return six_bitmap;
        case '7' : (*width) = seven_width; (*height) = 33; return seven_bitmap;
        case '8' : (*width) = eight_width; (*height) = 33; return eight_bitmap;
        case '9' : (*width) = nine_width; (*height) = 33; return nine_bitmap;
        case 'A' : (*width) = A_big_width; (*height) = 33; return A_big_bitmap;
        case 'B' : (*width) = B_big_width; (*height) = 33; return B_big_bitmap;
        case 'C' : (*width) = C_big_width; (*height) = 33; return C_big_bitmap;
        case 'D' : (*width) = D_big_width; (*height) = 33; return D_big_bitmap;
        case 'E' : (*width) = E_big_width; (*height) = 33; return E_big_bitmap;
        case 'F' : (*width) = F_big_width; (*height) = 33; return F_big_bitmap;
        case 'G' : (*width) = G_big_width; (*height) = 33; return G_big_bitmap;
        case 'H' : (*width) = H_big_width; (*height) = 33; return H_big_bitmap;
        case 'I' : (*width) = I_big_width; (*height) = 33; return I_big_bitmap;
        case 'J' : (*width) = J_big_width; (*height) = 33; return J_big_bitmap;
        case 'K' : (*width) = K_big_width; (*height) = 33; return K_big_bitmap;
        case 'L' : (*width) = L_big_width; (*height) = 33; return L_big_bitmap;
        case 'M' : (*width) = M_big_width; (*height) = 33; return M_big_bitmap;
        case 'N' : (*width) = N_big_width; (*height) = 33; return N_big_bitmap;
        case 'O' : (*width) = O_big_width; (*height) = 33; return O_big_bitmap;
        case 'P' : (*width) = P_big_width; (*height) = 33; return P_big_bitmap;
        case 'Q' : (*width) = Q_big_width; (*height) = 33; return Q_big_bitmap;
        case 'R' : (*width) = R_big_width; (*height) = 33; return R_big_bitmap;
        case 'S' : (*width) = S_big_width; (*height) = 33; return S_big_bitmap;
        case 'T' : (*width) = T_big_width; (*height) = 33; return T_big_bitmap;
        case 'U' : (*width) = U_big_width; (*height) = 33; return U_big_bitmap;
        case 'V' : (*width) = V_big_width; (*height) = 33; return V_big_bitmap;
        case 'W' : (*width) = W_big_width; (*height) = 33; return W_big_bitmap;
        case 'X' : (*width) = X_big_width; (*height) = 33; return X_big_bitmap;
        case 'Y' : (*width) = Y_big_width; (*height) = 33; return Y_big_bitmap;
        case 'Z' : (*width) = Z_big_width; (*height) = 33; return Z_big_bitmap;
        case 'a' : (*width) = a_width; (*height) = 33; return a_bitmap;
        case 'b' : (*width) = b_width; (*height) = 33; return b_bitmap;
        case 'c' : (*width) = c_width; (*height) = 33; return c_bitmap;
        case 'd' : (*width) = d_width; (*height) = 33; return d_bitmap;
        case 'e' : (*width) = e_width; (*height) = 33; return e_bitmap;
        case 'f' : (*width) = f_width; (*height) = 33; return f_bitmap;
        case 'g' : (*width) = g_width; (*height) = 33; return g_bitmap;
        case 'h' : (*width) = h_width; (*height) = 33; return h_bitmap;
        case 'i' : (*width) = i_width; (*height) = 33; return i_bitmap;
        case 'j' : (*width) = j_width; (*height) = 33; return j_bitmap;
        case 'k' : (*width) = k_width; (*height) = 33; return k_bitmap;
        case 'l' : (*width) = l_width; (*height) = 33; return l_bitmap;
        case 'm' : (*width) = m_width; (*height) = 33; return m_bitmap;
        case 'n' : (*width) = n_width; (*height) = 33; return n_bitmap;
        case 'o' : (*width) = o_width; (*height) = 33; return o_bitmap;
        case 'p' : (*width) = p_width; (*height) = 33; return p_bitmap;
        case 'q' : (*width) = q_width; (*height) = 33; return q_bitmap;
        case 'r' : (*width) = r_width; (*height) = 33; return r_bitmap;
        case 's' : (*width) = s_width; (*height) = 33; return s_bitmap;
        case 't' : (*width) = t_width; (*height) = 33; return t_bitmap;
        case 'u' : (*width) = u_width; (*height) = 33; return u_bitmap;
        case 'v' : (*width) = v_width; (*height) = 33; return v_bitmap;
        case 'w' : (*width) = w_width; (*height) = 33; return w_bitmap;
        case 'x' : (*width) = x_width; (*height) = 33; return x_bitmap;
        case 'y' : (*width) = y_width; (*height) = 33; return y_bitmap;
        case 'z' : (*width) = z_width; (*height) = 33; return z_bitmap;
        case ' ' : (*width) = space_width; (*height) = 33; return space_bitmap;
        case '"' : (*width) = apostrophe_width; (*height) = 33; return apostrophe_bitmap;
        case '(' : (*width) = bracket1_width; (*height) = 33; return bracket1_bitmap;
        case ')' : (*width) = bracket2_width; (*height) = 33; return bracket2_bitmap;
        case ',' : (*width) = comma_width; (*height) = 33; return comma_bitmap;
        case '/' : (*width) = div_width; (*height) = 33; return div_bitmap;
        case '.' : (*width) = dot_width; (*height) = 33; return dot_bitmap;
        case '=' : (*width) = equal_width; (*height) = 33; return equal_bitmap;
        case '!' : (*width) = exclamation_width; (*height) = 33; return exclamation_bitmap;
        case '-' : (*width) = minus_width; (*height) = 33; return minus_bitmap;
        case '*' : (*width) = multi_width; (*height) = 33; return multi_bitmap;
        case '+' : (*width) = plus_width; (*height) = 33; return plus_bitmap;
        case '?' : (*width) = qmark_width; (*height) = 33; return qmark_bitmap;
        case ';' : (*width) = semicolon_width; (*height) = 33; return semicolon_bitmap;
        case '\'' : (*width) = strophe_width; (*height) = 33; return strophe_bitmap;
        case ':' : (*width) = twodot_width; (*height) = 33; return twodot_bitmap;
        case '\\' : (*width) = backslash_width; (*height) = 33; return backslash_bitmap;
        case '#' : (*width) = hash_width; (*height) = 33; return hash_bitmap;
        case '$' : (*width) = dollar_width; (*height) = 33; return dollar_bitmap;
        case '%' : (*width) = percent_width; (*height) = 33; return percent_bitmap;
        case '^' : (*width) = power_width; (*height) = 33; return power_bitmap;
        case '&' : (*width) = ampersant_width; (*height) = 33; return ampersant_bitmap;
        case '{' : (*width) = bracket3_width; (*height) = 33; return bracket3_bitmap;
        case '}' : (*width) = bracket4_width; (*height) = 33; return bracket4_bitmap;
        case '[' : (*width) = bracket5_width; (*height) = 33; return bracket5_bitmap;
        case ']' : (*width) = bracket6_width; (*height) = 33; return bracket6_bitmap;
        case '|' : (*width) = ver_width; (*height) = 33; return ver_bitmap;
        case '@' : (*width) = malpa_width; (*height) = 33; return malpa_bitmap;
        case '_' : (*width) = underscore_width; (*height) = 33; return underscore_bitmap;
    }
}

uint8_t* getBitmask(char letter) {
    switch(letter) {
        case '0' : return zero_bitmask;
        case '1' : return one_bitmask;
        case '2' : return two_bitmask;
        case '3' : return three_bitmask;
        case '4' : return four_bitmask;
        case '5' : return five_bitmask;
        case '6' : return six_bitmask;
        case '7' : return seven_bitmask;
        case '8' : return eight_bitmask;
        case '9' : return nine_bitmask;
        case 'A' : return A_big_bitmask;
        case 'B' : return B_big_bitmask;
        case 'C' : return C_big_bitmask;
        case 'D' : return D_big_bitmask;
        case 'E' : return E_big_bitmask;
        case 'F' : return F_big_bitmask;
        case 'G' : return G_big_bitmask;
        case 'H' : return H_big_bitmask;
        case 'I' : return I_big_bitmask;
        case 'J' : return J_big_bitmask;
        case 'K' : return K_big_bitmask;
        case 'L' : return L_big_bitmask;
        case 'M' : return M_big_bitmask;
        case 'N' : return N_big_bitmask;
        case 'O' : return O_big_bitmask;
        case 'P' : return P_big_bitmask;
        case 'Q' : return Q_big_bitmask;
        case 'R' : return R_big_bitmask;
        case 'S' : return S_big_bitmask;
        case 'T' : return T_big_bitmask;
        case 'U' : return U_big_bitmask;
        case 'V' : return V_big_bitmask;
        case 'W' : return W_big_bitmask;
        case 'X' : return X_big_bitmask;
        case 'Y' : return Y_big_bitmask;
        case 'Z' : return Z_big_bitmask;
        case 'a' : return a_bitmask;
        case 'b' : return b_bitmask;
        case 'c' : return c_bitmask;
        case 'd' : return d_bitmask;
        case 'e' : return e_bitmask;
        case 'f' : return f_bitmask;
        case 'g' : return g_bitmask;
        case 'h' : return h_bitmask;
        case 'i' : return i_bitmask;
        case 'j' : return j_bitmask;
        case 'k' : return k_bitmask;
        case 'l' : return l_bitmask;
        case 'm' : return m_bitmask;
        case 'n' : return n_bitmask;
        case 'o' : return o_bitmask;
        case 'p' : return p_bitmask;
        case 'q' : return q_bitmask;
        case 'r' : return r_bitmask;
        case 's' : return s_bitmask;
        case 't' : return t_bitmask;
        case 'u' : return u_bitmask;
        case 'v' : return v_bitmask;
        case 'w' : return w_bitmask;
        case 'x' : return x_bitmask;
        case 'y' : return y_bitmask;
        case 'z' : return z_bitmask;
        case ' ' : return space_bitmask;
        case '"' : return apostrophe_bitmask;
        case '(' : return bracket1_bitmask;
        case ')' : return bracket2_bitmask;
        case ',' : return comma_bitmask;
        case '/' : return div_bitmask;
        case '.' : return dot_bitmask;
        case '=' : return equal_bitmask;
        case '!' : return exclamation_bitmask;
        case '-' : return minus_bitmask;
        case '*' : return multi_bitmask;
        case '+' : return plus_bitmask;
        case '?' : return qmark_bitmask;
        case ';' : return semicolon_bitmask;
        case '\'' : return strophe_bitmask;
        case ':' : return twodot_bitmask;
        case '\\' : return backslash_bitmask;
        case '#' : return hash_bitmask;
        case '$' : return dollar_bitmask;
        case '%' : return percent_bitmask;
        case '^' : return power_bitmask;
        case '&' : return ampersant_bitmask;
        case '{' : return bracket3_bitmask;
        case '}' : return bracket4_bitmask;
        case '[' : return bracket5_bitmask;
        case ']' : return bracket6_bitmask;
        case '|' : return ver_bitmask;
        case '@' : return malpa_bitmask;
        case '_' : return underscore_bitmask;
    }
}

void print_text_editor(Widget* parent, Window* window, char* text_to_print, uint32_t counter, uint32_t position_y, uint32_t position_x, uint32_t position_max, uint32_t do_show, uint8_t do_big) {
    letter_widgets = malloc(sizeof(Widget*) * (counter + 1));
    uint32_t initial_x = position_x;
    uint32_t width = 0;
    uint32_t height = 0;
    uint8_t *bitmap;
    uint8_t *bitmask;
    char let;
    for(int i = 0; i < counter; i++) {
        letter_widgets[i] = malloc(sizeof(Widget));
        let = text_to_print[i];
        if(do_big && big_letter && text_to_print[i] >= 'a' && text_to_print[i] <= 'z') {
            let = text_to_print[i] - 32;
            big_letter = 0;
        }
        else if(do_big && big_letter && text_to_print[i] >= '0' && text_to_print[i] <= '9') {
            big_letter = 0;
        }
        if(do_big && text_to_print[i] == '.') {
            big_letter = 1;
        }
        getBitmap(text_to_print[i], &width, &height, bitmap);     
        image_create(letter_widgets[i], width, height, getBitmap(let, &width, &height, bitmap), getBitmask(let));      
        widget_append_child(parent, letter_widgets[i]);
        letter_widgets[i]->style.position = PositionAbsolute;
        letter_widgets[i]->extra_data = window;
        if(text_to_print[i] >= '0' && text_to_print[i] <= '9') widget_set_top(letter_widgets[i], position_y + 2);
        else if(text_to_print[i] == '\\') widget_set_top(letter_widgets[i], position_y + 2);
        else if(text_to_print[i] == ']' || text_to_print[i] == '{' || text_to_print[i] == '}' || text_to_print[i] == '$' || text_to_print[i] == '@' || text_to_print[i] == '#') widget_set_top(letter_widgets[i], position_y + 2);
        else if(text_to_print[i] == '%') widget_set_top(letter_widgets[i], position_y + 2);
        else if(text_to_print[i] == '^' || text_to_print[i] == '&') widget_set_top(letter_widgets[i], position_y + 4);
        else if(text_to_print[i] == '_' || let == ',' || let == '.') widget_set_top(letter_widgets[i], position_y + 3);
        else widget_set_top(letter_widgets[i], position_y);     
        widget_set_left(letter_widgets[i], position_x);
        position_x += (width - 2);
        if(let == ' ') position_x -= 8;
        if(let == '.' || let == ',' || let == ':' || let == ';') position_x += 2;
        if(let == 'l') position_x += 1;
        if(position_x > position_max || text_to_print[i] == '\n') {
            position_x = initial_x;
            position_y += 35;
        }
    }
    if(do_show) {
        letter_widgets[counter] = malloc(sizeof(Widget));  
        getBitmap('|', &width, &height, bitmap);     
        image_create(letter_widgets[counter], width, height, getBitmap('|', &width, &height, bitmap), getBitmask('|'));      
        widget_append_child(parent, letter_widgets[counter]);
        letter_widgets[counter]->style.position = PositionAbsolute;
        letter_widgets[counter]->extra_data = window;
        widget_set_top(letter_widgets[counter], position_y);
        widget_set_left(letter_widgets[counter], position_x);
        position_x += width;
        if(position_x > position_max || text_to_print[counter] == '\n') {
            position_x = initial_x;
            position_y += 35;
        }
    } 
    if(do_big) big_letter = 1;   
}

static void window_on_click(Widget* widget, Event* event) {
    event_stop_propagation(event);
}

static void handle_bottom_bar_icon_click(Widget* widget, Event* event) {
    Window* window = widget->extra_data;
    window->widget->is_hidden = 0;
    window->is_minimalized = 0;
    event_stop_propagation(event);
}

Widget* create_window(uint8_t* icon, uint8_t* icon_bitmask) {
    window_number++;
    Window* created = malloc(sizeof(Window));
    created->is_minimalized = 0;
    created->is_maximized = 0;
    created->is_dragged = 0;
    created->last_bottom = 0;
    created->last_left = 0;
    created->last_right = 0;
    created->last_top = 0;
    list_append(windows, created);
    Widget* window_widget = malloc(sizeof(Widget));
    init_widget(window_widget);
    window_widget->extra_data = created;
    window_widget->on_mouse_down = window_on_click;
    window_widget->style.background_color = 0xffffff;
    window_widget->style.position = PositionAbsolute;
    widget_append_child(windows_container, window_widget);
    widget_set_top(window_widget, 200);
    widget_set_left(window_widget, 200);    
    widget_set_bottom(window_widget, 100);
    widget_set_right(window_widget, 100);
    create_title_bar(window_widget, created, handle_close_window);
    created->widget = window_widget;
    
    Widget* bottom_bar_icon = malloc(sizeof(Widget));
    image_create(bottom_bar_icon, 48, 48, icon, icon_bitmask);
    widget_append_child(bottom_bar, bottom_bar_icon);
    bottom_bar_icon->extra_data = created;
    bottom_bar_icon->style.position = PositionAbsolute;
    bottom_bar_icon->on_mouse_down = handle_bottom_bar_icon_click;
    widget_set_top(bottom_bar_icon, 9);
    widget_set_left(bottom_bar_icon, 10 + 58 * (bottom_bar->children->length - 1));
    created->bottom_bar = bottom_bar;
    return window_widget; 
}

Widget* create_window_proces(uint8_t* icon, uint8_t* icon_bitmask) {
    process_window = 1;
    created = malloc(sizeof(Window));
    created->is_minimalized = 0;
    created->is_maximized = 0;
    created->is_dragged = 0;
    created->last_bottom = 0;
    created->last_left = 0;
    created->last_right = 0;
    created->last_top = 0;
    list_append(windows, created);
    window_widget = malloc(sizeof(Widget));
    init_widget(window_widget);
    window_widget->extra_data = created;
    window_widget->on_mouse_down = window_on_click;
    window_widget->style.background_color = 0xffffff;
    window_widget->style.position = PositionAbsolute;
    widget_append_child(windows_container, window_widget);
    widget_set_top(window_widget, 200);
    widget_set_left(window_widget, 200);    
    //widget_set_bottom(window_widget, 100);
    widget_set_right(window_widget, 100);
    widget_set_height(window_widget, 800);
    create_title_bar(window_widget, created, handle_close_window_process);
    create_functional_bar_proces(window_widget, created);
    create_result_bar_proces(window_widget, created);  
    //create_separation_bar_proces(window_widget, created);
    created->widget = window_widget;
    
    Widget* bottom_bar_icon = malloc(sizeof(Widget));
    image_create(bottom_bar_icon, 48, 48, icon, icon_bitmask);
    widget_append_child(bottom_bar, bottom_bar_icon);
    bottom_bar_icon->extra_data = created;
    bottom_bar_icon->style.position = PositionAbsolute;
    bottom_bar_icon->on_mouse_down = handle_bottom_bar_icon_click;
    widget_set_top(bottom_bar_icon, 9);
    widget_set_left(bottom_bar_icon, 10 + 58 * (bottom_bar->children->length - 1));
    created->bottom_bar = bottom_bar;
    return window_widget; 
}

Widget* create_window_text_editor(uint8_t* icon, uint8_t* icon_bitmask) {
    text_editor = 1;
    created_text_editor = malloc(sizeof(Window));
    created_text_editor->is_minimalized = 0;
    created_text_editor->is_maximized = 0;
    created_text_editor->is_dragged = 0;
    created_text_editor->last_bottom = 0;
    created_text_editor->last_left = 0;
    created_text_editor->last_right = 0;
    created_text_editor->last_top = 0;
    list_append(windows, created_text_editor);
    window_text_editor = malloc(sizeof(Widget));
    init_widget(window_text_editor);
    window_text_editor->extra_data = created_text_editor;
    window_text_editor->on_mouse_down = window_on_click;
    window_text_editor->style.background_color = 0xffffff;
    window_text_editor->style.position = PositionAbsolute;
    widget_append_child(windows_container, window_text_editor);
    widget_set_top(window_text_editor, 200);
    widget_set_left(window_text_editor, 200);    
    widget_set_bottom(window_text_editor, 100);
    widget_set_right(window_text_editor, 100);
    widget_set_height(window_text_editor, 600);
    create_title_bar(window_text_editor, created_text_editor, handle_close_text_editor);
    create_functional_bar_text_editor(window_text_editor, created_text_editor);
    create_filename_bar_text_editor(window_text_editor, created_text_editor);
    //create_result_field_text_editor(window_text_editor, created_text_editor);
    created_text_editor->widget = window_text_editor;
    
    Widget* bottom_bar_icon = malloc(sizeof(Widget));
    image_create(bottom_bar_icon, 48, 48, icon, icon_bitmask);
    widget_append_child(bottom_bar, bottom_bar_icon);
    bottom_bar_icon->extra_data = created_text_editor;
    bottom_bar_icon->style.position = PositionAbsolute;
    bottom_bar_icon->on_mouse_down = handle_bottom_bar_icon_click;
    widget_set_top(bottom_bar_icon, 9);
    widget_set_left(bottom_bar_icon, 10 + 58 * (bottom_bar->children->length - 1));
    created_text_editor->bottom_bar = bottom_bar;
    return window_text_editor; 
}

void initiate_filenames() {
    filename_menager_text = malloc(1024 * 256 * sizeof(char));
    filenames = malloc(1024 * sizeof(char*));
    fill_file(files_in_system[0], "powers", "48 C7 C3 05 00 00 00 48 C7 C1 03 00 00 00 48 C7 C0 01 00 00 00 48 F7 E3 E2 FB");
    files_in_system[0]->filename_count = 6;
    fill_file(files_in_system[1], "katalog1/plik1", "");
    files_in_system[1]->filename_count = 14;
    fill_file(files_in_system[2], "katalog2/plik2", "");
    files_in_system[2]->filename_count = 14;
    fill_file(files_in_system[3], "threeplusfive", "48 C7 C3 05 00 00 00 48 C7 C0 03 00 00 00 48 01 D8");
    files_in_system[3]->filename_count = 13;
    fill_file(files_in_system[4], "plik1", "");
    files_in_system[4]->filename_count = 5;
    for(int i = 0; i < 5; i++) {
        files_in_system[i]->content_count = 0;
    }
    files_in_system[0]->content_count = 78;
    files_in_system[3]->content_count = 51;
    filenames[0] = "Pliki:\n";
    filenames[1] = "powers\n";
    filenames[2] = "katalog1/plik1\n";
    filenames[3] = "katalog2/plik2\n";
    filenames[4] = "threeplusfive\n";
    filenames[5] = "plik1\n";
    files_count = 5;
}

Widget* create_window_file_menager(uint8_t* icon, uint8_t* icon_bitmask) {
    file_menager = 1;
    created_file_menager = malloc(sizeof(Window));
    created_file_menager->is_minimalized = 0;
    created_file_menager->is_maximized = 0;
    created_file_menager->is_dragged = 0;
    created_file_menager->last_bottom = 0;
    created_file_menager->last_left = 0;
    created_file_menager->last_right = 0;
    created_file_menager->last_top = 0;
    list_append(windows, created_file_menager);
    window_file_menager = malloc(sizeof(Widget));
    init_widget(window_file_menager);
    window_file_menager->extra_data = created_file_menager;
    window_file_menager->on_mouse_down = window_on_click;
    window_file_menager->style.background_color = 0xffffff;
    window_file_menager->style.position = PositionAbsolute;
    widget_append_child(windows_container, window_file_menager);
    widget_set_top(window_file_menager, 220);
    widget_set_left(window_file_menager, 200);    
    widget_set_bottom(window_file_menager, 100);
    widget_set_right(window_file_menager, 100);
    widget_set_height(window_file_menager, 700);
    create_title_bar_file_menager(window_file_menager, created_file_menager, handle_close_file_menager);
    create_command_bar_file_menager(window_file_menager, created_file_menager);
    create_result_field_file_menager(window_file_menager, created_file_menager);
    created_file_menager->widget = window_file_menager;
    
    Widget* bottom_bar_icon = malloc(sizeof(Widget));
    image_create(bottom_bar_icon, 48, 48, icon, icon_bitmask);
    widget_append_child(bottom_bar, bottom_bar_icon);
    bottom_bar_icon->extra_data = created_file_menager;
    bottom_bar_icon->style.position = PositionAbsolute;
    bottom_bar_icon->on_mouse_down = handle_bottom_bar_icon_click;
    widget_set_top(bottom_bar_icon, 9);
    widget_set_left(bottom_bar_icon, 10 + 58 * (bottom_bar->children->length - 1));
    created_file_menager->bottom_bar = bottom_bar;
    return window_file_menager; 
}
