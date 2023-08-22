#include "binary_trees.h"
/**
 * binary_tree_is_perfect - This function checks if a binary tree is perfect.
 * @tree: ptr to the tree.
 * Return: 1 if the binary tree is perfect, otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}
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
#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A ptr to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}
