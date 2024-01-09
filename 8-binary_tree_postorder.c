#include "binary_trees.h"

/**
 * binary_tree_postorder- goes to binary tree.
 *
 * @tree: pointer to root
 * @func: pointer to function.
 *
 * Return: 0
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
