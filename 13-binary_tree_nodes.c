#include "binary_trees.h"

/**
*binary_tree_nodes - Function that counts the nodes with at least a child in
*a binary tree
*
*@tree: Pointer to the root node of the tree to count the number of leaves
*
*Return: Number of leaves or zero if tree is null
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	if (tree->left || tree->right)
		count++;
	return (count);
}
