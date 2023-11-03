#include "binary_trees.h"

/**
*binary_tree_sibling - Function that finds the sibling of a node
*@node: Pointer to the node to find the sibling
*
*Return: NULL if no sibling, or node or parent is NULL, else return sibling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->right != node)
		return (node->parent->right);

	return (node->parent->left);
}
