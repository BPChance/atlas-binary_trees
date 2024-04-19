#include "binary_trees.h"
/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 1 if perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;
	int left_perfect = 0, right_perfect = 0;

	if (tree == NULL)
		return 1;

	/* Count the height of the left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Check if left and right subtrees are perfect */
	left_perfect = binary_tree_is_perfect(tree->left);
	right_perfect = binary_tree_is_perfect(tree->right);

	/* Check if both subtrees have the same height and are perfect */
	return ((left_height == right_height) && left_perfect && right_perfect);
}
