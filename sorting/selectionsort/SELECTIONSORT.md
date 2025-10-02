#Selection Sort
Selection sort is an in-place comparison sorting algorithm.
It has a O(n²) time complexity, which makes it inefficient on large lists,
and generally performs worse than the similar insertion sort.
Selection sort is noted for its simplicity and has performance advantages over more complicated algorithms in certain situations, particularly where auxiliary memory is limited. 

<blockquote>
/*  PSEUDOCODE

0    selectionsort(A) \
1       for i ← 0 to length[A] - 1 \
2           min_index = i
3           for j ← i + 1 to length[A] \
4               if A[j] < A[min_index] \
5                   min_index ← j
6           if min_index != i
7               swap(i, min_index)

*/
</blockquote>
#TODO LIST

> expand selectionsort code to cover also float, double
> macro that autoselects the proper selectionsort invocation