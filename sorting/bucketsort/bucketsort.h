#ifndef BUCKETSORT_H
#define BUCKETSORT_H

#include "../insertionsort/insertionsort.h"
#include "../../list/node.h"
#include "../../misc/findmin.h"

int bucketsort(int* input) {
    int size = (int) sizeof(input) / sizeof(int);
    node_t* heads[size];
    
    //Initialize nodes
    int min = findmin_i(input);
    for (int i = 0; i < size; i++) {
        heads[i] = NULL;
    }

    for (int i = 0; i < size; i++) {
        heads[size * input[i]] = new_node(input[i]);
    }
    
    

}
#endif