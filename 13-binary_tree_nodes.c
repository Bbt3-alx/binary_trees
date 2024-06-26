#include "binary_trees.h"

/**
 * binary_tree_nodes -  counts the nodes with at least 1 child in a binary tree
 * @tree: A pointer to the root node to count the number of nodes
 * Return: Number of nodes with at least 1 child or NULL if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left || tree->right)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
