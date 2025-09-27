#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include <stdio.h>

int insertionsort_i (int input[], int size) {
	int key, i;

	printf("[INSERTIONSORT] Items to sort: %d\n", size);
	for (int j = 1; j < size; j++) {
		key = input[j];
		i = j - 1;
		printf("[INSERTIONSORT] Sorting item %d\n", j);
		while (i >= 0 && input[i] > key) {
			input[i + 1] = input[i];
			i--:
		}
		input[i + 1] = key;
	}
	return 0;
}
#endif
