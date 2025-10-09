#ifndef SEARCH_NODE_H
#define SEARCH_NODE_H

#include <stdio.h>
#include "node.h"
int search_key (node_t* root, int key) {
    //key is in root
    if (root == NULL || root->key == key) {
        return root->key;
    }
    //key is in left subtree
    if (root->key)

}
#endif