#ifndef NODE_H
#define NODE_H
#include <stdlib.h>

typedef struct node {
    int key;
    struct node* prev;
    struct node* next;
    
} node_t;

node_t* new_node(int key) {
    node_t* temp = (node_t*) malloc(sizeof(node_t));
    temp->key = key;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}
#endif