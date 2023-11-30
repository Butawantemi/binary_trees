#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 * Return: Height of the tree, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heighLeft = 0;
	size_t heightRight = 0;

	if (!tree)
		return (0);

	if (tree->left)
		heighLeft += 1 + binary_tree_height(tree->left);

	if (tree->right)
		heightRight += 1 + binary_tree_height(tree->right);

	if (heighLeft > heightRight)
		return (heighLeft);
	else
		return (heightRight);
}
