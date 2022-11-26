#include "binary_trees.h"

/**
 * binary_tree_depth - Checks the depth of the binary tree
 * @tree: A pointer to the root node of the tree.
 *
 * Return: 0 - if tree is NULL
 *	   size_t - depth of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{
		return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
	}

	return (0);
}
