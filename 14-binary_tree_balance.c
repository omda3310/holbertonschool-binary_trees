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
