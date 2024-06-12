#include "binary_tree.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: A pointer to the root node of the tree to measur the size
 * Return: The size or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size = 0, right_size = 0;

	if (!tree)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);
	return (1 + left_size + right_size);
}