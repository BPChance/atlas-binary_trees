#include "binary_trees.h"
/**
 * measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height == 0 && right_height == 0)
		return (0);

	return (left_height > right_height ? left_height : right_height) + 1;
}
