#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: A pointer to the root node of the tree to count the nodes
 * Return: Number of nodes with at least 1 child, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: A pointer to the root node of the tree to measure the size
 * Return: Size of the tree, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_l, size_r;

	if (tree == NULL)
		return (0);

	size_l = binary_tree_size(tree->left);
	size_r = binary_tree_size(tree->right);

	return (size_l + size_r + 1);
}

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: A pointer to the root node of the tree to count the leaves
 * Return: Number of leaves in the tree, or 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
