#include "binary_trees.h"

/**
 * binary_tree_is_root - ckecks if a node is a root
 *
 * @node: pointer to node.
 *
 * Return: 1 if is root.
 *
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
	{
		return (0);
	}

	return (1);
}
