#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that finds the uncle of a node.
 * @node: Pointer to the node to find the uncle.
 *
 * Return: pointer to the uncle node,
 * If node is NULL, return NULL,
 * If node has no uncle, return NULL.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	grandparent = node->parent->parent;

	if (grandparent->left == node->parent)
	{
		if (grandparent->right != NULL)
			return (grandparent->right);
		else
			return (NULL);
	}
	else
	{
		if (grandparent->left != NULL)
			return (grandparent->left);
		else
			return (NULL);
	}
}
