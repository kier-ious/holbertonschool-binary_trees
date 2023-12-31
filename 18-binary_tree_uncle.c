#include "binary_trees.h"
/**
 *binary_tree_uncle - finds uncle of a node
 *@node: is a ptr to the node to find the uncle
 *Return: uncle of the node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}

