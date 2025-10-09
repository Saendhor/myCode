#ifndef SEARCH_NODE_H
#define SEARCH_NODE_H

#include <stdio.h>
#include "node.h"

node_t* search_node (node_t* root, int key) {

    //key is in root
    if (root == NULL || root->key == key) {
        return root;
    }
    //key is in left subtree
    if (root->key > key) {
        return search_node(root->left, key);
    }

    //key is in right subtree
    if (root->key < key) {
        return search_node(root->right, key);
    }

    //throw error?
    return NULL;
}
#endif