#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/*Basic Binary Tree*/
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;

/*Binary Search Tree*/
typedef struct binary_tree_s bst_t;

/*AVL Tree*/
typedef struct binary_tree_s avl_t;

/*Max Binary Heap*/
typedef struct binary_tree_s heap_t;

/*binary_tree_print*/
void binary_tree_print(const binary_tree_t *tree);

/*new node*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/*Insert left*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/*Insert right*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/*Delete*/
void binary_tree_delete(binary_tree_t *tree);

/*Is leaf*/
int binary_tree_is_leaf(const binary_tree_t *node);

/*Is root*/
int binary_tree_is_root(const binary_tree_t *node);

/*Pre-order traversal*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/*In-order traversal*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/*Post-order traversal*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/*Height*/
size_t binary_tree_height(const binary_tree_t *tree);

/*Depth*/
size_t binary_tree_depth(const binary_tree_t *tree);

/*Size*/
size_t binary_tree_size(const binary_tree_t *tree);

/*Leaves*/
size_t binary_tree_leaves(const binary_tree_t *tree);

/*Nodes*/
size_t binary_tree_nodes(const binary_tree_t *tree);

/*Balance factor*/
int binary_tree_balance(const binary_tree_t *tree);

/*Is full*/
int binary_tree_is_full(const binary_tree_t *tree);

/*Is perfect*/
int binary_tree_is_perfect(const binary_tree_t *tree);

/*Sibling*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/*Uncle*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/*Lowest common ancestor*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);

/*Level-order traversal*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));

/*Is complete*/
int binary_tree_is_complete(const binary_tree_t *tree);

/*Rotate left*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);

/*Rotate right*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);

/*Is BST*/
int binary_tree_is_bst(const binary_tree_t *tree);

/*BST - Insert*/
bst_t *bst_insert(bst_t **tree, int value);

#endif /* _BINARY_TREES_H_ */
