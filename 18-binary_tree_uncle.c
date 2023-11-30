#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: A pointer to the node to find the uncle
 * Return: A pointer to the uncle node, or NULL if node is NULL or has no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	return (tree_sibling(node->parent));
}

/**
 * tree_sibling - Finds the sibling of a node
 * @node: A pointer to the node to find the sibling
 * Return: Sibling of node
 */
 
binary_tree_t *tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
