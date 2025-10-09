#ifndef INSERT_NODE_H
#define INSERT_NODE_H

#include "node.h"

node_t* insert_node (node_t* node, int key) {
    //Base case
    if (node == NULL) {
        return build_node(key);
    }
    //Look in the left subtree of the given node
    if (key < node->key) {
        node->left = insert_node(node->left, key);
    }
    //Look in the right subtree of the given node
    if (key < node->key) {
        node->right = insert_node(node->right, key);
    }
    //returns the modified tree
    return node;

}
#endif