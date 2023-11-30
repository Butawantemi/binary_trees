#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: A pointer to the node to insert the right-child in
 * @value: The value to store in the new node
 * Return: pointer to the created node || NULL on failure || if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_child;

	if (parent == NULL)
		return (NULL);

	new_child = malloc(sizeof(binary_tree_t));

	if (new_child == NULL)
		return (NULL);

	new_child->parent = parent;
	new_child->n = value;
	new_child->left = NULL;
	new_child->right = parent->right;

	parent->right = new_child;

	if (new_child->right)
	{
		new_child->right->parent = new_child;
	}

	return (new_child);
}
