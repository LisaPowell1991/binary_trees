#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL, your function must return 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t left_side;
	size_t right_side;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_side = binary_tree_is_full(tree->left);
	right_side = binary_tree_is_full(tree->right);

	if (tree->left != NULL && tree->right != NULL)
		return (left_side && right_side);

	return (0);
}
