#include <stdio.h>
#include "allocator.h"

int main(){
    init_allocator();

    printf("Before allocation:\n");
    print_memory_state();

    void *ptr = my_malloc(100);

    if(ptr != NULL) {
        printf("Allocated 100 byhtes successfully.\n\n");
    } else {
        printf("Allocation failed");
    }

    printf("After allocation: \n");
    print_memory_state();

    return 0;
}