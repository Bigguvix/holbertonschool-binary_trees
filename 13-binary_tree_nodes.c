#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes
 *
 * @tree: pointer to root
 *
 * Return: tree = NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t p;

	p = 0;

	if (tree)
	{
		p += (tree->left || tree->right) ? 1 : 0;
		p += binary_tree_nodes(tree->left);
		p += binary_tree_nodes(tree->right);
	}
	return (p);
}
