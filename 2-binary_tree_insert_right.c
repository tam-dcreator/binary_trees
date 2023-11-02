#include "binary_trees.h"

/**
* binary_tree_insert_right - Function that inserts a node as the right-child
* of another node
*
*@parent: Pointer to the node to insert the right child
*@value: Value to store in the new node
*
*Return: Pointer to the created node or NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
		return (NULL);

	/*Create a newnode using the binary_tree_node function*/
	newnode = binary_tree_node(parent, value);
	if (!newnode)
		return (NULL);

	/*Check if the right slot has a child and assign it to newnode if yes*/
	if (parent->right)
	{
		newnode->right = parent->right;
		newnode->right->parent = newnode;
	}

	parent->right = newnode;

	return (newnode);
}
