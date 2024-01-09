#include "binary_trees.h"

/**
 * binary_tree_preorder - goeas to binary tree pre ordering traversal
 *
 * @tree: pointer to the root
 * @func: pointer to function.
 *
 * Return: ALways 0.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
