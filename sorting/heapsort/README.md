#Heap Sort
Heap sort is a comparison-based sorting technique based on Binary Heap Data Structure.
It can be seen as an optimization over selection sort where we first find the max (or min) element and swap it with the last (or first).
We repeat the same process for the remaining elements.
In Heap Sort, we use Binary Heap so that we can quickly find and move the max element in O(Log n) instead of O(n) and hence achieve the O(n Log n) time complexity.

First convert the array into a max heap using heapify, Please note that this happens in-place.
The array elements are re-arranged to follow heap properties.
Then one by one delete the root node of the Max-heap and replace it with the last node and heapify.
Repeat this process while size of heap is greater than 1.

    1. Rearrange array elements so that they form a Max Heap.
    2. Repeat the following steps until the heap contains only one element:
        2.1 Swap the root element of the heap (which is the largest element in current heap) with the last element of the heap.
        2.2 Remove the last element of the heap (which is now in the correct position). We mainly reduce heap size and do not remove element from the actual array.
        2.3 Heapify the remaining elements of the heap.

Finally we get sorted array.

<blockquote>
/*  PSEUDOCODE

    HEAPSORT(A) \
        BUILD-MAX-HEAP(A) \
        for i ← length[A] downto 2 \
            SWAP(A, 1, i) \
            heap-size[A] ← heap-size[A] - 1 \
            MAX-HEAPIFY(A, 1) \
*/
</blockquote>

<blockquote>
/* PSEUDOCODE

    BUILD-MAX-HEAP(A) \
        heap-size[A] ← length[A] \
        for i ← floor(length[A / 2]) downto 1 \
            MAX-HEAPIFY(A, i) \

*/
</blockquote>

<blockquote>
/* PSEUDOCODE

    MAX-HEAPIFY (A, i) \
        l ← LEFT(i) \
        r ← RIGHT(i) \
        if l <= heap-size[A] and A[l] > A[i] \
            max ← l \
        else \
            max ← i \
        if r <= heap-size[A] and A[r] > A[max] \
            max ← r \
        if max != i \
            swap A[i] ←→ A[max] \
            MAX-HEAPIFY(A, max) \

*/
</blockquote>
#TODO LIST

> expand heapsort and relative code to cover also float, double
> macro that autoselects the proper heapsort and relative code invocation