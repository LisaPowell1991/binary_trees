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
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_levelorder - Goes through a binary tree
 * using level-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *
 * Return: Void.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t **level_nodes, *current;
	int front = 0, rear = 0;

	if (tree == NULL || func == NULL)
		return;

	level_nodes = malloc(sizeof(binary_tree_t *) * binary_tree_height(tree));

	if (level_nodes == NULL)
		return;

	level_nodes[rear] = (binary_tree_t *)tree;

	while (front <= rear)
	{
		current = level_nodes[front++];
		func(current->n);

		if (current->left != NULL)
			level_nodes[++rear] = current->left;
		if (current->right != NULL)
			level_nodes[++rear] = current->right;
	}
	free(level_nodes);
}


