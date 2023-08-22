#include "binary_trees.h"
/**
 * binary_tree_insert_left - adds node as left child of another binary tree
 * @parent: a ptr to node to insert left child in
 * @value: the value to store in the new node
 * Return: if parent is NULL or error occurs - NULL
 * otherwise, ptr to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}

