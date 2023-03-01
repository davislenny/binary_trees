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
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: root node
 *
 * Return: 0 if tree=NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int a, b;

	if (!tree)
		return (0);
	a = (tree->left)
		? (int)binary_tree_height(tree->left)
		: -1;
	b = (tree->right)
		? (int)binary_tree_height(tree->right)
		: -1;
	return (a - b);
}
