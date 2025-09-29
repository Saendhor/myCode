#ifndef MERGESORT_H
#define MERGESORT_H

#include <stdio.h>

int merge(int tomerge[], int inf, int pivot, int sup) {
    //Determining left and right ranged based on the pivot
    int left_size = pivot - inf + 1;
    int right_size = sup - pivot;

    //Creating left and right array
    int left_array[left_size], right_array[right_size];

    //Copying data to the respective arrays
    for (int i = 0; i < left_size; i++) {
        left_array[i] = tomerge[inf + i];
    }
    for (int j = 0; j < right_size; j++) {
        right_array[j] = tomerge[pivot + 1 + j];
    }

    //Merging left and right array
    int current = inf;
    int l_index = 0, r_index = 0;
    while (l_index < left_size && r_index < right_size) {
        if (left_array[l_index] <= right_array[r_index]) {
            tomerge[current] = left_array[l_index];
            l_index++;
        } else {
            tomerge[current] = right_array[r_index];
            r_index++;
        }
        current++;
    }

    //Keep merging the left side if the right array has already been emptied
    while (l_index < left_size) {
        tomerge[current] = left_array[l_index];
        l_index++;
        current++;
    }

    //Keep merging the right side if the left array has already been emptied
    while (r_index < right_size) {
        tomerge[current] = right_array[r_index];
        r_index++;
        current++;
    }

    return 0;
}


int mergesort(int input[], int inf, int sup) {
    if (inf < sup) {
        int pivot = inf + (sup - inf) / 2; //already floor since is int

        //Invoke recursively mergesort on left side
        mergesort(input, inf, pivot);
        //Invoke recursively mergesort on right side
        mergesort(input, pivot + 1, sup);
        //Merge the results of the mergesort invocations
        if (merge(input, inf, pivot, sup) != 0) {
            printf("Error while attempting to merge with indexes\n\
                            inf: %d\tsup: %d", inf, sup);
            return 1; //ERROR
        }
    }
    
    return 0;
}

#endif