#ifndef RADIXSORT_H
#define RADIXSORT_H

#include "../../misc/findmax.h"

void custom_countingsort(int* to_order, int size, int exp) {
    int temp[size];
    int count[10] = {0};

    //Store number of occurences in count[]
    for (int i = 0; i < size; i++) {
        count[(to_order[i] / exp) % 10]++;
    }

    //Cumulative counting
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    //Build output array
    for (int i = size - 1; i >= 0; i--) {
        temp[count[(to_order[i] / exp) % 10] - 1] = to_order[i];
        count[(to_order[i] / exp) % 10]--;
    }

    //Copy values from temp to inputed array
    for (int i = 0; i < size; i++) {
        to_order[i] = temp[i];
    }
}

int radixsort(int* input, int digits) {
    int max = findmax_i(input);
    int size = (int) sizeof(input) / sizeof(int);
    for (int exp = 1; max / exp > 0; exp *= 10) {
        custom_countingsort(input, size, exp);    
    }
    return 0;
}
#endif
