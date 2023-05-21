#include <stddef.h>
#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer
 * Return: integer
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
	{
		return (0);
	}
	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
