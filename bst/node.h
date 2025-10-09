#ifndef NODE_H
#define NODE_H

typedef struct node {
    int key;
    struct node* left;
    struct node* right;

}node_t;
#endif