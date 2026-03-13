# c-malloc-custom-heap-allocator
A custom malloc/free implementation in C using free lists and simulated heap growth.

MiniMalloc is a custom memory allocator written in C that simulates how malloc() and free() work internally.
It manages a private heap, stores metadata for each memory block, reuses freed memory through a free list, and simulates sbrk() to expand the heap when needed.

This project is built for learning low-level memory management and systems programming concepts such as block allocation, fragmentation, pointer arithmetic, and heap organization.
