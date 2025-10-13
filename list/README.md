# Linked List
A linked list is a linear data structure where each element (called a node) is connected to the next one using pointers.
Unlike array, elements of linked list are stored in random memory locations.
A linked list is a sequence of nodes in which each node is made up of two parts:
    - Data: The value stored in the node.
    - Pointer: A reference to the next node in the sequence. (There can be multiple pointers for different kind of linked list.)

Unlike arrays, linked lists do not store nodes in contiguous memory locations.
Instead, each node contains pointer to the next node, forming a chain-like structure and to access any element (node), we need to first sequentially traverse all the nodes before it.
It is a recursive data structure in which any smaller part of it is also a linked list in itself.