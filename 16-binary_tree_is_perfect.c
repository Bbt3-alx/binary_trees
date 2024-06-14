#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 * Return: An integer
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (!tree)
		return (0);

	left_h = binary_tree_is_perfect(tree->left);
	right_h = binary_tree_is_perfect(tree->right);

	if (left_h != right_h)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/*if (tree->left == NULL || tree->right == NULL)
		return (0);*/

	return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
}
