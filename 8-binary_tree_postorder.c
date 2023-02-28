#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree
 * using post-order traversal
 * @tree: Points to the root node of the tree to traverse
 * @func: points to a function to call for each node
 *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
