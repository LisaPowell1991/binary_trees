#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures
 * the size of a binary tree.
 * @tree: Pointer to the root node of
 * the tree to measure the size.
 *
 * Return: If tree is NULL, the function must return 0.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_side;
	size_t right_side;

	if (tree == NULL)
		return (0);

	left_side = binary_tree_size(tree->left);
	right_side = binary_tree_size(tree->right);

	return (1 + left_side + right_side);
}
