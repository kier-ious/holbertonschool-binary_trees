#include "binary_trees.h"
/**
 * binary_tree_delete - deletes a binary tree
 * @tree: a ptr to the root of the node of the tree to dtl
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
