#include "task.h"
#include <stdlib.h>
#include <stdio.h>

void doIt() {
    for(int i = 0; i < 100; i++) {
        printf("Switching to otherTask... \n");
        yield();
        printf("Returned to mainTask!\n");
    }
}

void mainVoid() {
    initTasking();
    for(int j = 0; j < 10; j++) {
        Task task;
        uint32_t* pagedir = malloc(sizeof(uint32_t));
        createTask(&task, otherMain, 0, pagedir);
        doIt();
    }
}

int main() {
    mainVoid();
    return 0;
}