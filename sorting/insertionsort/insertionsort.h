#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include <stdio.h>

int insertionsort_i (int array[], int size) {
	int key, i;

	printf("[INSERTIONSORT] Items to sort: %d\n", size);
	for (int j = 1; j < size; j++) {
		key = array[j];
		i = j - 1;
		printf("[INSERTIONSORT] Sorting item %d\n", j);
		while (i >= 0 && array[i] > key) {
			array[i + 1] = array[i];
			i--;
		}
		array[i + 1] = key;
	}
	return 0;
}
#endif
