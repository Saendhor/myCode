#ifndef FINDMAX_H
#define FINDMAX_H

int findmax_i(int* input) {
    int size = (int) sizeof(input) / sizeof(int);
    
    int max = input[size - 1]; //if it is already in order it won't perform the instruction in the if
    for (int i = 0; i < size; i++) {
        if (max < input[i]) {
            max = input[i];
        }
    }
    return max;
}
#endif