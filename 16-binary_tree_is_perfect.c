#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL, your function must return 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_perfect, right_perfect;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL  && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
	{
		left_perfect = binary_tree_is_perfect(tree->left);
		right_perfect = binary_tree_is_perfect(tree->right);

		if (left_perfect && right_perfect)
			return (1);
	}
	return (0);
}
