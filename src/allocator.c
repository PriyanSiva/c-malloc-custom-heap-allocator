#include <stddef.h>
#include <stdio.h>
#include "allocator.h"

static char heap[HEAP_SIZE];
Block *freeList = NULL;

void init_allocator(void){
    freeList = (Block *)heap;
    freeList->size = HEAP_SIZE - sizeof(Block);
    freeList->free = 1;
    freeList->next = NULL;
}

void print_memory_state(void) {
    Block *current = freeList;
    int blockNumber = 1;

    while(current != NULL) {
        printf("Block %d: \n", blockNumber);
        printf(" Size: %d\n", current->size);
        printf(" Free: %d\n", current->free);
        printf(" Next: %p\n", (void *)current->next);
        printf("\n");

        current = current->next;
        blockNumber++;
    }

}

void *my_malloc(int size) {
    Block *block;

    if (size <= 0) {
        return NULL;
    }

    block = find_free_block(size);
    if(block == NULL) {
        return NULL;
    }

    block->free = 0;

    return (void *)(block + 1);
}

Block *find_free_block(int size) {
    Block *current = freeList;

    while (current != NULL) {
        if (current->free == 1 && current->size >=size){
            if(current->free ==1 && current->size >= size) {
                return current;
            }
            current = current->next;
        }
    }

    return NULL;
}
