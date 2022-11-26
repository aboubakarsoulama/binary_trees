#include "binary_trees.h"

/**
 * binary_tree_node - function to create new node
 * @parent: points to the parent of the new node
 * @value: integer to store in node
 *
 * Return: NULL - if the creation fails
 *	   New node pointer if it succeeds
 *
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		/* if malloc is not successful*/
		return (NULL);
	}

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
