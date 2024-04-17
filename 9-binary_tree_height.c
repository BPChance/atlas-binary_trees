#include "binary_trees.h"
/**
 * measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height, max_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		max_height = left_height + 1;
	else
		max_height = right_height + 1;

	return (max_height);
}
