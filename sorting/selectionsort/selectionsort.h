#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include <stdio.h>
#include "../../misc/swap.h"

int selectionsort_i (int array[], int size) {
    int min_index;
    for (int i = 0; i < size - 1; i++) {
        min_index = i;
        for (int j = i + 1; j < size; j++) {
            //update min_index if smaller value is found
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }
        //if min_index is updated swap it
        if (min_index != i) {
            swap(&array[i], &array[min_index]);
        }
    }
    return 0;
}

#endif