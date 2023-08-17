#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks is a node is a leaf of a binary tree
 * @node: a ptr to the node to check
 * Return: if the node is a leaf return 1
 * otherwise return a 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
