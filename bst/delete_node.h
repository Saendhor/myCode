#ifndef DELETE_NODE_H
#define DELETE_NODE_H

#include <stdio.h>
#include "find_min_key.h"
#include "node.h"

node_t* delete_node (node_t* root, int key) {
    if (root == NULL) {
        printf("[BST] Given node is NULL\nReturning NULL\n");
        return NULL;
    }

    //Visit left subtree
    if (key < root->key) {
        root->left = delete_node(root->left, key);
    
    //Visit right subtree
    } else if (key > root->key) {
        root->right = delete_node(root->right, key);

    } else {
        if (root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;

        } else if (root->left == NULL || root->right == NULL) {
            node_t* temp;
            if (root->left == NULL) {
                temp = root->right;            
            } else {
                temp = root->left;
            }
            free(root);
            return temp;
        } else {
            node_t* temp = find_min_key(root->right);
            root->key = temp->key;
            root->right = delete_node(root->right, temp->key);
        }
    }
    return root;
}
#endif