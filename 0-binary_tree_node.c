#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: The parent of the node
 * @value: Value of the node
 *
 * Return: A pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = calloc(1, sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->parent = parent;
	node->n = value;

	return (node);
}
