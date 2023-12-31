#include "binary_trees.h"

/**
*binary_tree_uncle - Function that finds the uncle of a node
*@node: Pointer to the node to find the uncle
*
*Return: Null if node is null or has no uncle, else returns uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left != node->parent)
		return (node->parent->parent->left);

	return (node->parent->parent->right);
}
