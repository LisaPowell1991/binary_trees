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

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL, your function must return 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height;
	int left_perfect, right_perfect;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	left_perfect = binary_tree_is_perfect(tree->left);
	right_perfect = binary_tree_is_perfect(tree->right);

	if (left_height == right_height)
	{
		if (left_perfect && right_perfect)
			return (1);
	}
	return (0);
}
