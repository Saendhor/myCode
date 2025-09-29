#ifndef SWAP_H
#define SWAP_H

int swap (int* elem1, int* elem2) {
	int temp = *elem1;
	*elem1 = *elem2;
	*elem2 = temp;
}

#endif