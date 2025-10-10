#Sorting algorithms and complexity

Comparative sorting algorithms

    Name            Best            Average         Worst       Stable      InPlace     Method
    Bubble Sort     O(n)            O(n²)           O(n²)        yes         yes        Exchanging
    Insertion Sort  O(n)            O(n²)           O(n²)        yes         yes        Insertion
    Selection Sort  O(n²)           O(n²)           O(n²)        no          yes        Selection
    Merge Sort      O(n log(n))     O(n log(n))     O(n log(n))  yes         no         Merging
    Quick Sort      O(n log(n))     O(n log(n))     O(n²)        no          yes        Partitioning
    Heap Sort       O(n log(n))     O(n log(n))     O(n log(n))  no          yes        Selection

Non-Comparative corting algorithms

    Name            Time-Complexity       Stable      InPlace     
    Counting Sort     O(n + k)             yes          no    
    Radix Sort        O(d(n + k))*         yes          ?
    Bucket Sort       O(n + r)             yes          no

*Oss: è O(d(n + k)) solo se l'algoritmo di ordinamento alla base ha complessità O(n + k) altrimenti esistono altri casi studio
Note:
    > https://en.wikipedia.org/wiki/Sorting_algorithm
