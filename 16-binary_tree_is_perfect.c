#include "binary_trees.h"

/**
*binary_tree_is_perfect - Function that checks if a binary tree is perfect
*@tree: Pointer to the root node of the tree to check
*
*Return: if tree is NULL 0, if tree is perfect 1
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_is_full(tree) && (binary_tree_balance(tree) == 0))
		return (1);
	return (0);
}

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

	if (!tree)
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

/**
*binary_tree_balance - Function that measures the balance factor of a binary
*tree
*
*@tree: Pointer to the root node of the tree to measure the balance factor
*
*Return: 0 if tree is NULL, -1 for unbalanced tree, any positive int for a
*balanced tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_sub_height = 0, r_sub_height = 0;

	if (!tree)
		return (0);

	l_sub_height = tree->left ? 1 + (binary_tree_height(tree->left)) : 0;

	r_sub_height = tree->right ? 1 + (binary_tree_height(tree->right)) : 0;

	return (l_sub_height - r_sub_height);
}

/**
*binary_tree_height - Function that measures the height of a binary tree
*@tree: Pointer to the root node of the tree to measure the height
*
*Return: 0 if tree is NULL or height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (!tree)
		return (0);

	l_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	r_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((l_height > r_height) ? l_height : r_height);
}
