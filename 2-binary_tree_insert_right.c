#include "binary_trees.h"
/**
 * binary_tree_insert_right - adds node as right child of another binary tree
 * @parent: a ptr to node to insert right child in
 * @value: the value to store in the new node
 * Return: if parent is NULL or error occurs - NULL
 * otherwise, ptr to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
