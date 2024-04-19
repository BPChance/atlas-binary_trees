#include "binary_trees.h"
/**
 * binary_tree_balance - balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;
	const binary_tree_t *current = tree->left;

	if (tree == NULL)
		return (0);

	while (current)
	{
		left_height++;
		current = current->left;
	}

	current = tree->right;
	while (current)
	{
		right_height++;
		current = current->right;
	}

	 return (left_height - right_height);
}
