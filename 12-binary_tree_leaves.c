#include "binary_trees.h"

/**
*binary_tree_leaves - Function that counts the leaves in a binary tree
*@tree: Pointer to the root node of the tree to count the number of leaves
*
*Return: Number of leaves or zero if tree is null
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);
	if (!tree->left && !tree->right)
		count++;
	return (count);
}
