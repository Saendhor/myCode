#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <stdbool.h>
#include <stdio.h>
#include "../../misc/swap.h"

int bubblesort_i (int* array, int size) {
    bool swapped;
    for (int i = 0; i < size - 1; i++) {
        //reset 'swapped' value to false
        swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
                swapped = true;
            }
        }
        //if no element was swapped then break
        if (swapped == false) {
            break;
        }
    }
    return 0;
}

#endif