#include "binary_trees.h"
/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 1 if perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0, count = 0, perfect_nodes;
	const binary_tree_t *current = tree;

	if (tree == NULL)
		return (0);
	
	while (current)
	{
		height++;
		current = current->left;
	}

	current = tree;

	while (current)
	{
		count++;
		current = current->right;
	}

	perfect_nodes = (1 << height) - 1;

	return (count == perfect_nodes);
}
