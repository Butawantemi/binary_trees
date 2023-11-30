#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: A pointer to the node to find the uncle
 * Return: A pointer to the uncle node, or NULL if node is NULL or has no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node) {
    if (node == NULL || node->parent == NULL || node->parent->parent == NULL) {
        return NULL;  
    }

    binary_tree_t *grand_parent = node->parent->parent;
    
   
    if (grand_parent->left == node->parent) {
        return grand_parent->right;  
    } else {
        return grand_parent->left;
    }
}
