#include "binary_trees.h"

/**
 * binary_tree_inorder - goes to binary tree
 *
 * @tree: pointer to root
 * @func: pointer to function call.
 *
 * Return: always 0
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
