#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 *
 * Description: If parent already has a left-child,
 *the new node takes its place,
 * and the old left-child becomes the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *tmp;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		tmp = parent->left;
		parent->left = new_node;
		new_node->left = tmp;
		tmp->parent = new_node;
	}
	else
	{
		parent->left = new_node;
	}

	return (new_node);
}
