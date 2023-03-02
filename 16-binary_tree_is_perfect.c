#include "binary_trees.h"

/**
 * bt_levels - finds tree levels
 * @tree: the binary tree
 *
 * Return: number of levels
 */
size_t bt_levels(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);

	l = bt_levels(tree->left);
	r = bt_levels(tree->right);
	return (MAX(l, r) + 1);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Points to the root node of the tree to measure the height
 *
 * Return: 0 if tree=NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (bt_levels(tree) - 1);
}

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Points to root node of the tree to measure the size
 *
 * Return: 0 if tree=NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Points to root node
 *
 * Return: 1 if true 0 if false
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int n, h;

	if (!tree)
		return (0);
	n = (int)binary_tree_size(tree);
	h = binary_tree_height(tree);
	return (n == (2 << h) - 1);
}
