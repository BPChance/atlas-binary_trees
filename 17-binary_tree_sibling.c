#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node, or null if node has no siblings
 *
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* check if node is the left child and return the right child */
	if (node->parent->left == node)
		return (node->parent->right);

	/* check if node is the right child and return the left child */
	if (node->parent->right == node)
		return (node->parent->left);

	/** code is the only child */
	return (NULL);
}
