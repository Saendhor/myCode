#ifndef PRINT_ARRAY_H
#define PRINT_ARRAY_H

#include <stdio.h>

int print_array (int array[], int size) {
	for (int i = 0; i < size; i++) {
		printf("[MISC] Item in slot n.%d is %d\n", i, array[i]);
	}
	return 0;
}
#endif
