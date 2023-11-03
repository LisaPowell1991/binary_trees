#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the
 * lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: pointer to the second node.
 *
 * Return: Pointer to the lowest
 * common ancestor node of the two given nodes,
 * If no common ancestor was found,
 * your function must return NULL.
 */

binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *temp1;
	const binary_tree_t *temp2;

	if (first == NULL || second == NULL)
		return (NULL);

	temp1 = first;
	temp2 = second;

	while (temp1 != temp2)
	{
		if (temp1 == NULL)
		{
			temp1 = second;
		}
		else
		{
			temp1 = temp1->parent;
		}

		if (temp2 == NULL)
		{
			temp2 = first;
		}
		else
		{
			temp2 = temp2->parent;
		}
	}
	return ((binary_tree_t *)temp1);
}
