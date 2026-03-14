#ifndef ALLOCATOR_H
#define ALLOCATOR_H

typedef struct Block {
    int size;
    int free;
    struct Block *next;
} Block;

void *my_malloc(int size);
void my_free(void *ptr);
void print_memory_state(void);

#endif
