#include <stddef.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes -  count the nodes with at least 1 child
 * @tree: binary_tree
 * Return: number of nodes with et least one child
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		if (tree->right)
		{
			count += 1;
		}
	}
	count += binary_tree_nodes(tree->left);
	if (tree->right != NULL)
	{
		if (tree->left == NULL)
		{
			count += 1;
		}
	}
	count += binary_tree_nodes(tree->right);
	return (count);
}
