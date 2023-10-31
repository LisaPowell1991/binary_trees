#include "binary_trees.h"

/**
 * binary_tree_leaves - Function that counts,
 * the leaves in a binary tree.
 * @tree: Pointer to the root node of
 * the tree to count the number of leaves.
 *
 * Return: If tree is NULL, the function must return 0.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_side;
	size_t right_side;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_side = binary_tree_leaves(tree->left);
	right_side = binary_tree_leaves(tree->right);

	return (left_side + right_side);
}
