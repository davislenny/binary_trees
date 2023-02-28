#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: The node to check
 *
 * Return: 1 if true, 0 otherwise or node=NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return (!node->parent);
}
