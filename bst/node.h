#ifndef NODE_H
#define NODE_H

#include <stdlib.h>

typedef struct node {
    int key;
    struct node* left;
    struct node* right;

} node_t;

node_t* build_node (int key) {
    node_t* node = (node_t*) malloc(sizeof(node_t));
    node->key = key;
    node->left = NULL;
    node->right = NULL;

    return node;
}
#endif