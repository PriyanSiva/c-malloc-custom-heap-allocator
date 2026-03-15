#include <stddef.h>
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
        printf(" Next: %p\n", (void)current->next);
        printf("\n");

        current = current->next;
        blockNumber++;
    }

}
