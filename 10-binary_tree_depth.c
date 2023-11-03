#include "binary_trees.h"

/**
*binary_tree_depth - Function that measures the depth of a node in a binary
*tree
*
*@tree: Pointer to the node to measure the depth
*
*Return: 0 if tree is NULL or depth of tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (tree->parent)
	{
		count = tree->parent ? 1 + (binary_tree_depth(tree->parent))
			: 0;
		count = tree->parent ? 1 + (binary_tree_depth(tree->parent))
			: 0;
	}

	return (count);
}
