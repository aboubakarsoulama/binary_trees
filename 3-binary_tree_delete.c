#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree
 * @tree: points to the root node of the tree
 *
 * Return: Nothing
 *
 * Description: If tree is NULL then do nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
