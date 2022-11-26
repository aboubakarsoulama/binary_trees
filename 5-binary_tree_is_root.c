#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root
 * @node: points to the node to be checked
 *
 * Return: 1 - if node is a root
 *	   0 - if node is null or not a root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
