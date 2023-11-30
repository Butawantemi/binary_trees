#include "binary_trees.h"


/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: A pointer to the node to insert the left-child in
 * @value: The value to store in the new node
 * Return: A pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *left_child = malloc(sizeof(binary_tree_t));

	if (left_child == NULL)
		return (NULL);

	left_child->parent = parent;
	left_child->n = value;
	left_child->left = parent->left;
	left_child->right = NULL;
	parent->left = left_child;

	if (left_child->left)
	{
		left_child->left->parent = left_child;
	}

	return (left_child);
}
