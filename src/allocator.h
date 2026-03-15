#ifndef ALLOCATOR_H
#define ALLOCATOR_H

#define HEAP_SIZE 1024

typedef struct Block {
    int size;
    int free;
    struct Block *next;
} Block;

void init_allocator(void);
void *my_malloc(int size);
void my_free(void *ptr);
void print_memory_state(void);

#endif
