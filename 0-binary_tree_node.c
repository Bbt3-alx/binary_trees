#include "binary_trees.h"

/**
 * binary_tree_t *binary_tree_node - a function that creates a binary tree node
 * @parent: A pointer to the parent node of the node to create
 * @value: The value to put in the new node
 * Return: a pointer to the new node, or NULL on faillure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	return (new_node);
}
