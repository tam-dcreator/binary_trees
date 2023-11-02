#include "binary_trees.h"

/**
*binary_tree_is_full - Function that checks if a binary tree is full
*
*@tree: Pointer to the root node of the tree to count the number of leaves
*
*Return: Number of leaves or zero if tree is null
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_is_full, right_is_full;

	if (!tree )
		return (0);


	if ((!tree->left && !tree->right) || (tree->left && tree->right))
	{
		if (!tree->left || !tree->right)
			return (1);
		left_is_full = binary_tree_is_full(tree->left);
		right_is_full = binary_tree_is_full(tree->right);

		return (left_is_full && right_is_full);
	}

	return (0);
}
