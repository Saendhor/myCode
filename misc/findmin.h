#ifndef FINDMIN_H
#define FINDMIN_H

int findmin_i(int* input) {
    int size = (int) sizeof(input) / sizeof(int);
    
    int min = input[0]; //if it is already in order it won't perform the instruction in the if
    for (int i = 0; i < size; i++) {
        if (min > input[i]) {
            min = input[i];
        }
    }
    return min;
}
#endif