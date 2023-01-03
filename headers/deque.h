#ifndef DEQUE_H
#define DEQUE_H
#include <types.h>

typedef struct {
    void* left;
    void* right;
    void* buffer;
    void* buffer_end;
    size_m length;
    size_m element_size;
} Deque;
    
Deque* deque_create(size_m element_size);
void deque_push_left(Deque* deque, void* element);
void deque_push_right(Deque* deque, void* element);
void* deque_peek_left(Deque* deque);
void* deque_peek_right(Deque* deque);
void* deque_pop_left(Deque* deque);
void* deque_pop_right(Deque* deque);
void deque_destory(Deque* deque);
uint8_t deque_is_empty(Deque* deque);

#endif