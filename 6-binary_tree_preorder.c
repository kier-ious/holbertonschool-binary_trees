#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through BT using preorder traversal
 * @tree: ptr to the root node of the tree to traverse
 * @func: ptr to func to call for each node. Value in node must
 * be passed as para to this func. If tree or func is NULL
 * do nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
