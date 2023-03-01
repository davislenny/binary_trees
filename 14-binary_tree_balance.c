#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: root node
 *
 * Return: 0 if tree=NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
