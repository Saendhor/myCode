#ifndef FIND_MIN_KEY_H
#define FIND_MIN_KEY_H

#include "node.h"

node_t* find_min_key(node_t* root) {
    if (root == NULL) {
        return NULL;

    } else if (root->left != NULL) {
        return find_min_key(root->left);
    }
    return NULL;
}
#endif

/*
// Function to find the minimum value
struct BinaryTreeNode* findMin(struct BinaryTreeNode* root)
{
    if (root == NULL) {
        return NULL;
    }
    else if (root->left != NULL) {
        return findMin(root->left);
    }
    return root;
}
*/