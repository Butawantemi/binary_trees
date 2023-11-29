#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node, or NULL on failure or if parent is NULL
 * If parent already has a left-child, the new node must take its place, 
 * and the old left-child must be set as the left-child of the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	if (parent == NULL)
		return (NULL);

	left_child = malloc(sizeof(binary_tree_t));

	if (left_child == NULL)
		return (NULL);

	left_child->parent = parent;
	left_child->n = value;
	/*replacing old left child*/
	left_child->left = parent->left;
	left_child->right = NULL;
	/*point left child of parent to new left child*/
	parent->left = left_child;

	/*set old left child as new left child*/
	if (left_child->left)
	{
		left_child->left->parent = left_child;
	}

	return (left_child);
}
