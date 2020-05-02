#include "binary_trees.h"

/**
 * binary_tree_node - Create a new node
 * @parent: pointer to the parent node
 * @value: isthe value to put in the new node
 * Return: a pointer to the new node, or NULL if fails
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new)
	{
		new->n = value;
		new->parent = parent;
		new->left = NULL;
		new->right = NULL;
	}
	return (new);
}
