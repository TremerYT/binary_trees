#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node
 * @parent: pointer to the node to insert
 * @value: value to store in the new node
 * Return: new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new = binary_tree_node(parent, value);

	if (new == NULL)
		return (NULL);

	binary_tree_t *o_left = parent->left;

	parent->left = new;

	if (o_left != NULL)
	{
		o_left->parent = new;
		new->left = o_left;
	}

	return (new);
}
