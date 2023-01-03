
#include <types.h>
#include <memory.h>
#include <list.h>

List* list_create() {
    List* created = malloc(sizeof(List));
    created->length = 0;
    created->list = malloc(8 * sizeof(void*));
    created->max_size = 8;
    return created;
}

static void list_resize(List* list) {
    void* new_address = malloc(list->max_size * 2 * sizeof(void*));
    memcpy(new_address, list->list, list->length * sizeof(void*));
    free(list->list);
    list->list = new_address;
    list->max_size *= 2;
}

void list_remove(List* list, void* element) {
    list_pop(list, list_find_index(list, element));
}

void list_append(List* list, void* element) {
    if (list->length == list->max_size) {
        list_resize(list);
    }
    list->list[list->length] = element;
    list->length++;
}

void list_pop(List* list, int32_t index) {
    list->length--;
    memcpy(list->list + index, list->list + index + 1, (list->length - index) * sizeof(void*));
}

void list_insert(List* list, size_m index, void* element) {
    if (list->length == list->max_size) {
        list_resize(list);
    }
    list->length++;
    void* copy; 
    void* inserted = element;
    for (uint32_t i = index; i < list->length; i++) {
        copy = list_get(list, i);
        list->list[i] = inserted;
        inserted = copy;
    }
}

size_m list_find_index(List* list, void* element) {
    for (uint32_t i = 0; i < list->length; i++) {
        if (list_get(list, i) == element) {
            return i;
        }
    }
    return -1;
}

void* list_get(List* list, size_m index) {
    return list->list[index];
}

void list_destroy(List* list) {
    free(list->list);
    free(list);
}
