#include <stddef.h>
#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor
 * @tree: a tree
 * Return: integer
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0;

	if (!tree)
	{
		return (0);
	}
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);
	return (height_left - height_right);
}
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	/* Recursively calculate the height of the left subtree */
	if (tree->left != NULL)
		left_height += 1 + binary_tree_height(tree->left);

	/* Recursively calculate the height of the right subtree */
	if (tree->right != NULL)
		right_height += 1 + binary_tree_height(tree->right);

	/* Return the maximum height between the left and right subtrees */
	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
