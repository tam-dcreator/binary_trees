#include "binary_trees.h"

/**
*binary_tree_insert_left - Function that inserts a node as the left-child of
*another node.
*
*@parent: A pointer to the node to insert the left chile in
*@value: The value to store in the new node
*
*Return: Pointer to the created node or NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
		return (NULL);
	/*Create a new node using the binary tree function*/
	newnode = binary_tree_node(parent, value);

	if (!newnode)
		return (NULL);

	/*If theres an existing value on the left, make it a child of newnode*/
	if (parent->left)
	{
		newnode->left = parent->left;
		newnode->left->parent = newnode;
	}

	/*Set the parent's left to newnode*/
	parent->left = newnode;

	return (newnode);
}
