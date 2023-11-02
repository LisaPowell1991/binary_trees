#include "binary_trees.h"

/**
 * binary_tree_sibling -Function that finds the sibling of a node.
 * @node: pointer to the node to find the sibling.
 *
 * Return: A pointer to the sibling node,
 * If node is NULL or the parent is NULL, return NULL,
 * If node has no sibling, return NULL.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;

	if (parent->left != node && parent->left != NULL)
		return (parent->left);

	else if (parent->right != node && parent->right != NULL)
		return (parent->right);

	return (NULL);
}
