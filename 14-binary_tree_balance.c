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


/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to measure the balance factor
 * Return: Balance factor of the tree, or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree) 
{
    if (tree == NULL) {
        return 0;
    }
    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);
    return (int)(left_height - right_height);
}
