# Merge Sort
Merge Sort is a divide-and-conquer, comparison-based sorting algorithm.
Most implementations of merge sort are stable.
Here's a step-by-step explanation of how merge sort works:

    1. Divide: Divide the list or array recursively into two halves until it can no more be divided.
    2. Conquer: Each subarray is sorted individually using the merge sort algorithm.
    3. Merge: The sorted subarrays are merged back together in sorted order. The process continues until all elements from both subarrays have been merged.

### PSEUDOCODE


```pseudocode
00	MERGE(A, p, q, r)
01        n ← q -p + 1
02        m ← r - q
03        create array L[n + 1] e R[m + 1]
04        for i ← 1 to n
05            L[i] ← A[p + i - 1]
06        for j ← 1 to m
07            R[j] ← A[q + j]
08        L[n] ← INF
09        R[m] ← INF
10        i ← 1
11        j ← 1
12        for k ← p to r
13            if L[i] <= R[j]
14                A[k] ← L[i]
15                i ← i + 1
16            else A[k] ← R[j]
17                j ← j + 1
```
```pseudocode
00	MERGESORT(A, p, r)
01        if p < r
02            q ← floor((p+r) / 2)
03            MERGESORT(A, p, q)
04            MERGESORT(A, q+1, r)
05            MERGE(A, p, q, r)
```
# TODO LIST

> expand mergesort and merge code to cover also float, double
> macro that autoselects the proper mergesort and merge invocation