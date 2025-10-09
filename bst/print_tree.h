#ifndef PRINT_TREE_H
#define PRINT_TREE_H

#include <stdio.h>
#include "node.h"

void preOrder(node_t* root) {
    if (root != NULL) {
        printf("%d\n", root->key);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(node_t* root) {
    if (root != NULL) {
        inOrder(root->left);
        printf("%d\n", root->key);
        inOrder(root->right);
    }
}

void postOrder(node_t* root) {
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d\n", root->key);
    }
}
#endif