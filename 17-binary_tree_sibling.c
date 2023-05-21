#include <stddef.h>
#include "binary_trees.h"
/**
 * binary_tree_sibling -  finds the sibling of a node
 * @node: the sibling node
 * Return: node or null
 *
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	return (node->parent->left);
}
