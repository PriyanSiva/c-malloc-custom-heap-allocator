#include <stdio.h>
#include "allocator.h"

int main(){
    init_allocator();
    printf("allocator initialized.\n");
    print_memory_state();
    return 0;
}