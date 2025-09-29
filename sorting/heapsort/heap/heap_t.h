#ifndef HEAP_T_H
#define HEAP_T_H

#include "../../../misc/swap.h"

typedef struct heap {
    int* array;
    int heap_size;
    int total_size;

} heap_t;

int fleft(int index) {
    return (2 * (index + 1)) - 1;
}

int fparent(int index) {
    return (index + 1) / 2;
}

int fright(int index) {
    return 2 * (index + 1); // (2 * (index + 1) + 1) - 1;
}

#endif