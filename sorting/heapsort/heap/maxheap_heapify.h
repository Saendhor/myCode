#ifndef MAXHEAP_HEAPIFY_H
#define MAXHEAP_HEAPIFY_H

#include "heap_t.h"

int maxheap_heapify(heap_t toheapify, int index) {
    int atindex_max = index;
    //left < heapsize && left value > index value
    if (fleft(index) <= toheapify.heap_size
        && toheapify.array[fleft(index)] > toheapify.array[atindex_max]) {
        atindex_max = fleft(index);
    }
    //right index < heapsize index && right value > max value (still index value if we entered into the "else")
    if (fright(index) <= toheapify.heap_size
        && toheapify.array[fright(index)] > toheapify.array[atindex_max]) {
        atindex_max = fright(index);
    }
    if (atindex_max != index) {
        swap(&toheapify.array[index], &toheapify.array[atindex_max]);
        maxheap_heapify(toheapify, atindex_max);
    }

    return 0;
}

#endif