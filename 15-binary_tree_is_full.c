#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node
 * Return: 1 if tree is full, return 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/** if the node has 1 child, it is not full */
	if ((tree->left == NULL && tree->right != NULL) ||
	(tree->left != NULL && tree->right == NULL))
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
