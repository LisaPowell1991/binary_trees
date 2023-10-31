#include "binary_trees.h"

/**
 * binary_tree_height - function that measures
 * the height of a binary tree.
 * @tree: Pointer to the root node of
 * the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_balance - Function that measures
 * the balance factor of a binary tree.
 * @tree: Pointer to the root node of
 * the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);

	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
