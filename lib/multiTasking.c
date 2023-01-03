#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct {
    uint32_t eax, ebx, ecx, edx, esi, edi, esp, ebp, eip, eflags, cr3;
} Registers;

typedef struct Task {
    Registers registers;
    uint32_t isMain;
    uint32_t pid;
    void (*fun)();
    struct Task *next;
    struct Task *previous;
} Task;

uint32_t taskNumber = 0;
uint32_t number = 0;
Task* currentTask;
Task mainTask;

void mainFunction();
void newFunction();
void createTask(Task *task, void (*main)(), uint32_t flags, uint32_t *pagedir, uint32_t isMain);
void initTasking();
void addTask();
void removeTask();
void yield();

void print() {
    printf("currentTask->pid = %d, currentTask->next->pid = %d, currentTask->next->next->pid = %d, currentTask->previous->pid = %d, currentTask->previous->previous->pid = %d\n", currentTask->pid, currentTask->next->pid, currentTask->next->next->pid, currentTask->previous->pid, currentTask->previous->previous->pid);
    int i = 0;
    uint32_t currentPid = currentTask->pid;
    Task* toPrint = currentTask;
    printf("%d->", toPrint->pid);
    while(toPrint->next->pid != currentPid && i < 10) {
        printf("%d->", toPrint->next->pid);
        toPrint = toPrint->next;  
        i++;    
    }
    printf("%d\n", currentPid);
}

void mainFunction() {
    print();
    yield();
}

void newFunction() {
    int a = 0;
    for(int i = 0; i < 100000000; i++) {
        a = a + i;
        a = a - i;
    } 
}

void createTask(Task *task, void (*main)(), uint32_t flags, uint32_t *pagedir, uint32_t isMain) {
    task->registers.eax = 0;
    task->registers.ebx = 0;
    task->registers.ecx = 0;
    task->registers.edx = 0;
    task->registers.esi = 0;
    task->registers.edi = 0;
    task->registers.eflags = flags;
    task->registers.eip = (uint32_t) main;
    task->registers.cr3 = (uint32_t) pagedir;
    task->next = task;
    task->previous = task;
    task->isMain = isMain;
    task->pid = number;
    task->fun = main;
}

void initTasking() {
    createTask(&mainTask, mainFunction, 0, 0, 1);
    mainTask.next = &mainTask;
    mainTask.previous = &mainTask;
    currentTask = &mainTask;
    taskNumber++;
    number++;
}

void addTask() {
    Task *newTask = (Task*)malloc(sizeof(Task));
    Task *tmp;    
    createTask(newTask, newFunction, mainTask.registers.eflags, (uint32_t*)mainTask.registers.cr3, 0);
    currentTask->next->previous = newTask;
    newTask->next = currentTask->next;
    currentTask->next = newTask;
    newTask->previous = currentTask;
    taskNumber++;
    number++;
    print();
}

void removeTask() {
    if(taskNumber <= 1 || currentTask->isMain) {
        printf("Main Task cannot be removed\n");
        return;
    }
    currentTask->previous->next = currentTask->next;
    currentTask->next->previous = currentTask->previous;
    Task* toRemove = currentTask;
    currentTask = currentTask->next;
    taskNumber--;
    free(toRemove);
    print();
}

void yield() {
    currentTask = currentTask->next;
    (*currentTask->fun)();
}

int main() {
    initTasking();
    print();
    removeTask();
    addTask();
    addTask();
    addTask();
    yield();
    yield();
    print();
    printf("Remove\n");
    removeTask();
    addTask();
    (*currentTask->fun)();
}