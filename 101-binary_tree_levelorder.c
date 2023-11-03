#include "binary_trees.h"

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
	int front = 0, rear = 0;

	if (tree == NULL || func == NULL)
		return;

	binary_tree_t *queue[1000];
	
	queue[rear] = (binary_tree_t *)tree;
	rear++;
	
	while (front < rear)
	{
		binary_tree_t *current = queue[front];
		front++;
		func(current->n);
		
		if (current->left)
		{
			queue[rear] = current->left;
			rear++;
		}
		if (current->right)
		{
			queue[rear] = current->right;
			rear++;
		}
	}
}
