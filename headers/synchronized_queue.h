#ifndef SYNCHRONIZED_QUEUE_H
#define SYNCHRONIZED_QUEUE_H
#include <types.h>
#include <deque.h>

typedef struct {
    Deque* first_deque;
    Deque* second_deque;
    uint8_t is_using_first_deque;
    uint8_t should_reset;
} SynchronizedQueue;


SynchronizedQueue* synchronized_queue_create(size_m element_size);

void synchronized_queue_put(SynchronizedQueue* queue, void* element);

void* synchronized_queue_get(SynchronizedQueue* queue);

uint8_t synchronized_queue_is_empty(SynchronizedQueue* queue);

void* synchronized_queue_peek_last(SynchronizedQueue* queue);

void synchronized_queue_destory(SynchronizedQueue* queue); 

#endif

