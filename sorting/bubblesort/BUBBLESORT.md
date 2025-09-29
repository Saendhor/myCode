#Bubble Sort
Bubble sort is a simple sorting algorithm that repeatedly steps through the input list element by element,
comparing the current element with the one after it, swapping their values if needed.
These passes through the list are repeated until no swaps have to be performed during a pass, meaning that the list has become fully sorted.
The algorithm, which is a comparison sort, is named for the way the larger elements "bubble" up to the top of the list.

<blockquote>
/*  PSEUDOCODE

0    bubblesort(A) \
1        for i ← 0 to length[A] - 1 \
2           swapped  ← false \
3           for j ← 0 to length[A] - i - 1 \
4               if A[j] > A[j + 1] \
5                   swap(A, j, j + 1) \
6                   swapped ← true \
7            if swapped == false \
8               break \

*/
</blockquote>
#TODO LIST

> expand insertionsort code to cover also float, double
> macro that autoselects the proper insertionsort invocation
