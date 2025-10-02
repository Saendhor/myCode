#Counting sort
Counting Sort is a non-comparison-based sorting algorithm.
It is particularly efficient when the range of input values is small compared to the number of elements to be sorted.
The basic idea behind Counting Sort is to count the frequency of each distinct element in the input array and use that information to place the elements in their correct sorted positions.
It works well when the range of input elements is small and comparable to the size of the array.
For example, for input [1, 4, 0, 2, 1, 1], the size of array is 6 and range of elements is from 0 to 4
If range of input array is of order more than n Log n where n is size of the array,
then we can better sort the array using a standard comparison based sorting algorithm like Merge Sort.

<blockquote>
/*  PSEUDOCODE

    COUNTINGSORT(A, K) \
        BUILD-MAX-HEAP(A) \
        for i ← length[A] downto 2 \
            SWAP(A, 1, i) \
            heap-size[A] ← heap-size[A] - 1 \
            MAX-HEAPIFY(A, 1) \
*/
</blockquote>