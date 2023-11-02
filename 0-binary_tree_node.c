#include "binary_trees.h"

/**
*binary_tree_node - Function that creates a binary tree node
*@parent: A pointer to the parent node of the node to create
*@value: The value of the new node
*
*Return: A pointer to the new node or NULL
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
		return (NULL);
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = parent;
	newnode->n = value;

	return (newnode);
}
