# Counting sort
Counting Sort is a non-comparison-based sorting algorithm.
It is particularly efficient when the range of input values is small compared to the number of elements to be sorted.
The basic idea behind Counting Sort is to count the frequency of each distinct element in the input array and use that information to place the elements in their correct sorted positions.
It works well when the range of input elements is small and comparable to the size of the array.
For example, for input [1, 4, 0, 2, 1, 1], the size of array is 6 and range of elements is from 0 to 4
If range of input array is of order more than n Log n where n is size of the array,
then we can better sort the array using a standard comparison based sorting algorithm like Merge Sort.

<blockquote>
/*  PSEUDOCODE

    COUNTINGSORT(A, k) \
        n ← length(A) \
        C ← new array(k)
        for i ← 0 to k  // Initialize to 0
            C[i] ← 0
        for i ← 0 to n  // The slot of C that has as index the value of A gets incremented
            C[A[i]] ← C[A[i]] + 1
        for i ← 0 to k  // Cumulative amount of items before the number in C
            C[i + 1] ← C[i + 1] + C[i]
        B ← new array(n)
        for i ← n - 1 to 0
            B[ C[ A[i] ] ] ← A[i] //the slot of B is the number of items before given item A[i] stated in C
            C[A[i]] ← C[A[i]] - 1 //decrease the amount of items since 1 has been placed
*/
</blockquote>

# TODO LIST

> expand countingsort code to cover also float, double
> macro that autoselects the proper countingsort invocation