
#ifndef LIST_H
#define LIST_H
#include <types.h>

typedef struct {
    size_m length;
    size_m max_size;
    void** list;
} List;

List* list_create();
void list_append(List* list, void* element);
void list_pop(List* list, int32_t index);
void list_insert(List* list, size_m index, void* element);
void* list_get(List* list, size_m index);
void list_remove(List* list, void* element);
void list_destroy(List* list);
size_m list_find_index(List* list, void* element);

#endif
