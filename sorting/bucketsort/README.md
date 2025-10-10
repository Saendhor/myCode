# Bucket Sort
Bucket sort is a sorting technique that involves dividing elements into various groups, or buckets.
These buckets are formed by uniformly distributing the elements.
Once the elements are divided into buckets, they can be sorted using any other sorting algorithm.
Finally, the sorted elements are gathered together in an ordered fashion.

Works well when the input array elements are uniformly distributed across a range.
A stable algorithm because we use Insertion Sort (which is stable) to sort the individual buckets.

<blockquote>
/*  PSEUDOCODE

    BUCKETSORT(A) \
        n ← length[A] \
        B ← new array (n - 1) \
        for i ← 0 to n - 1 \
            B[i] ← new list \
        for i ← 1 to n \
            B[n * A[i]] ← A[i] \
        for i ← 0 to n -1 \
            INSERTIONSORT(B[i]) \
        concatenate B[0, ... , n - 1] \

*/
</blockquote>
