#include "binary_trees.h"

/**
 * get_height - A helper function to get the height of the tree
 * @tree: A pointe to the tree
 * Return: The height or 0 if tree is NULL
 */
int get_height(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (!tree)
		return (0);

	left_h = get_height(tree->left);
	right_h = get_height(tree->right);

	return ((left_h > right_h ? left_h : right_h) + 1);

}

/**
 * binary_tree_balance -  measures the balance factor of a binary tree
 * @tree: A  pointer to the root node of the tree to measure the balance factor
 * Return: The balance factor,
 *	0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);

	left_height = get_height(tree->left);
	right_height = get_height(tree->right);

	return (left_height - right_height);
}
