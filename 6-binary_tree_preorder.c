#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: void
 *
 * the value in the node must be passed as
 * a parameter to the function
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/** call the function on the current node */
	func(tree->n);

	/** recursively traverse the left subtree */
	binary_tree_preorder(tree->left, func);

	/** recursively traverse the right subtree */
	binary_tree_preorder(tree->right, func);
}
