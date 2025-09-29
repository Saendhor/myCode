#ifndef CREATEHEAP_H
#define CREATEHEAP_H

#include <stdlib.h>
#include "heap_t.h"

heap_t createheap_i(int* input) {
    heap_t new_heap;
    new_heap.total_size = (int) sizeof(input) / sizeof(int);
    new_heap.heap_size = 0;
    new_heap.array = input;

    return new_heap;
}

#endif