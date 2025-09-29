#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <stdio.h>
#include <stdlib.h>
#include "../../misc/swap.h"

int partition_i(int* input, int inf_index, int sup_index) {
    int value = input[sup_index];
    int index = inf_index - 1 ;
    for (int j = inf_index; j <= sup_index - 1; j++) {
        if (input[j] <= value) {
            index++;
            if (swap(&input[index], &input[j]) != 0) {
                perror("[PARTITION] Error while attempting to swap selected items");
                exit(1);
            }
        }
    }
    if (swap(&input[index + 1], &input[sup_index]) != 0) {
        perror("[PARTITION] Error while attempting to swap selected items");
        exit(1);
    }
    return index + 1;
}

int quicksort_i(int* input, int inf, int sup) {
    if (inf < sup) {
        int pivot = partition_i(input, inf, sup); //Splits array into 3 parts: (1) <= x ; (2) > x; (3) pivot
        if (quicksort_i(input, inf, pivot - 1) != 0) {
            perror("Error while invoking quicksort on left partitioning");
            exit(1);
        }
        if (quicksort_i(input, pivot + 1, sup) != 0) {
            perror("Error while invoking quicksort on right partitioning");
            exit(1);
        }
    }
    return 0;
}

#endif