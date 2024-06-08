#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node
 * Return: A pointer to the created node, or NULL on faillure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node;

	if (parent == NULL)
		return (NULL);

	new_left_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new_left_node == NULL)
		return (NULL);

	new_left_node->n = value;
	new_left_node->left = parent->left;
	new_left_node->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = new_left_node;

	parent->left = new_left_node;
	new_left_node->parent = parent;

	return (new_left_node);
}
