#include "binary_trees.h"

/**
*binary_tree_inorder - Function that goes through a binary tree using
*in-order traversal
*
*@tree: Pointer to the root node of the trees to traverse
*@func: Pointer to a function to call for each node
*
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	/*Recursively traverse through the left, when we get to the end*/
	/*print the value and then recursively traverse throught the right*/

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
