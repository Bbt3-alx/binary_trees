#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child of another node
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node
 * Return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node;

	if (parent == NULL)
		return (NULL);

	new_right_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new_right_node == NULL)
		return (NULL);

	new_right_node->n = value;
	new_right_node->left = NULL;
	new_right_node->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = new_right_node;

	parent->right = new_right_node;
	new_right_node->parent = parent;

	return (new_right_node);
}
