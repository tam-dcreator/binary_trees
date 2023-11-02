#include "binary_trees.h"

/**
*binary_tree_postorder - Function that goes through a binary tree using
*post-order traversal
*
*@tree: Pointer to the root node of the trees to traverse
*@func: Pointer to a function to call for each node
*
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	/*Recursively traverse through the left to the end*/
	/*Recursively traverse throught the right to the end*/
	/*Then print the value*/

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
