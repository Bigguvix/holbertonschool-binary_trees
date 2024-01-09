#include "binary_trees.h"

/**
 * binary_tree_height - the height of binary tree
 *
 * @tree: pointer to root
 *
 * Return: tree = NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t i;
		size_t d;

		i = 0;
		d = 0;

		i = tree_left ? 1 + binary_tree_height(tree->left) : 0;
		d = tree_right ? 1 + binary_tree_height(tree->right) : 0;
		return ((i > r) ? i : r);
	}

	return (0);
}
