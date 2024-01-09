#include "binary_trees.h"

/**
 * binary_tree_insert_left- inserts node on the left
 *
 * @parent: pointer to node
 * @value: new node
 *
 * Return: pointer to created node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n;

	if (parent == NULL)
		return (NULL);

	n = binary_tree_node(parent, value);

	if (n == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		n->left = parent->left;
		parent->left->parent = n;
	}

	parent->left = n;

	return (n);
}
