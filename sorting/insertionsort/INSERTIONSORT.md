#Insertion Sort
Insertion sort is a simple sorting algorithm that works by iteratively inserting each element of an unsorted list into its correct position in a sorted portion of the list.
It is like sorting playing cards in your hands.
You split the cards into two groups: the sorted cards and the unsorted cards. Then, you pick a card from the unsorted group and put it in the right place in the sorted group. 

<blockquote>
/*  PSEUDOCODE

0    insertionsort(A) \
1        for j ← 1 to length[A] \
2            key ← A[j] \
3            //Insert A[j] in the already ordered sequence A[0, 1, ... ,j-1] \
4            i ← j-1 \
5            while i >= 0 and A[i] > key \
6                A[i+1] ← A[i] \
7                i ← i-1 \
8            A[i+1] ← key \

*/

#TODO LIST

> expand insertionsort code to cover also float, double
> macro that autoselects the proper insertionsort invocation