#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: points to the node to be checked
 *
 * Return: 1 - if node is a leaf
 *	   0 - if node is null or not a leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->right != NULL || node->left != NULL)
		return (0);

	return (1);
}
