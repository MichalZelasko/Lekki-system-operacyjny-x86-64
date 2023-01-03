#include <synchronized_queue.h>
#include <memory.h> 

SynchronizedQueue* synchronized_queue_create(size_m element_size) {
    SynchronizedQueue* queue = malloc(sizeof(SynchronizedQueue));
    queue->first_deque = deque_create(element_size);
    queue->second_deque = deque_create(element_size);
    queue->is_using_first_deque = 0;
    queue->should_reset = 1;
    return queue;
}

void synchronized_queue_put(SynchronizedQueue* queue, void* element) {
    Deque* deque = queue->is_using_first_deque ? queue->second_deque : queue->first_deque;
    deque_push_right(deque, element);
}

void* synchronized_queue_get(SynchronizedQueue* queue) {
    Deque* used_deque = queue->is_using_first_deque ? queue->first_deque : queue->second_deque;
    if (queue->should_reset) {
        queue->is_using_first_deque = 1;
        queue->should_reset = 0;
        used_deque = queue->first_deque;
    } 
    if (queue->is_using_first_deque && deque_is_empty(used_deque)) {
        queue->is_using_first_deque = 0;
        used_deque = queue->is_using_first_deque ? queue->first_deque : queue->second_deque;
    }
    return deque_pop_left(used_deque);
};

uint8_t synchronized_queue_is_empty(SynchronizedQueue* queue) {
    if (queue->should_reset && !(deque_is_empty(queue->first_deque) && deque_is_empty(queue->second_deque))) {
        return 0;
    }
    if (queue->is_using_first_deque && deque_is_empty(queue->first_deque) && deque_is_empty(queue->second_deque)) {
        queue->is_using_first_deque = 0;
        queue->should_reset = 1;
        return 1;
    }
    if (!queue->is_using_first_deque && deque_is_empty(queue->second_deque)) {
        queue->should_reset = 1;
        return 1;
    }
    return 0;
}

void* synchronized_queue_peek_last(SynchronizedQueue* queue) {
    if (deque_is_empty(queue->first_deque) && deque_is_empty(queue->second_deque)) {
        return 0;
    }
    Deque* deque = queue->is_using_first_deque ? queue->second_deque : queue->first_deque;
    if (deque_is_empty(deque)) {
        deque = queue->is_using_first_deque ? queue->first_deque : queue->second_deque;
    }
    return deque_peek_right(deque);
}

void synchronized_queue_destory(SynchronizedQueue* queue) {
    deque_destory(queue->first_deque);
    deque_destory(queue->second_deque);
    free(queue);
}

