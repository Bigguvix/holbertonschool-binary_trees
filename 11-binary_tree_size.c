#include "binary_trees.h"

/**
 * binary_tree_size - size of binary tree
 *
 * @tree: pointer to root.
 *
 * Return: tree = NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s;

	s = 0;

	if (tree)
	{
		s += 1;
		s += binary_tree_size(tree->left);
		s += binary_tree_size(tree->right);
	}
	return (size);
}
