#ifndef COUNTINGSORT_H
#define COUNTINGSORT_H

#include <stdlib.h>
#include "../../misc/findmax.h"

int countingsort_i(int* input) {
    int size = (int) sizeof(input) / sizeof(int);
    int max = findmax_i(input);

    //create C array and initialize it to 0
    int num_values[max];
    for (int i = 0; i < max; i++) {
        num_values[i] = 0;
    }

    //increase the amount of occurences of the A[j] value in C
    for (int j = 0; j < size; j++) {
        num_values[input[j]]++;
    }

    //define the cumulative amount in the array C
    for (int i = 1; i < max; i++) {
        num_values[i] = num_values[i] + num_values[i - 1];
    }

    //creating the array of the ordered input
    int ordered_input[size];
    for (int j = size; j > 0; j--) {
        ordered_input[num_values[input[j]]] = input[j];
        num_values[input[j]]--;
    }

    //Copying the ordered values inside the inputed array
    for (int i = 0; i < size; i++) {
        input[i] = ordered_input[i];
    }

    return 0;
}

#endif