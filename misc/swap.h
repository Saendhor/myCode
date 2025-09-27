#ifndef SWAP_H
#define SWAP_H

#include <stdio.h>

int swap (int* array, int index1, int index2) { //from index1 to index2
	int temp_value = array[index1]; //store value from A[j] to temp
	array[index1] = array[index2]; //swap contents of A[i] with A[j]
	array[index2] = temp_value; //reassign the previously stored value of A[i] to A[j]
	return 0;
}

#endif
