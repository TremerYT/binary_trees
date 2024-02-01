#include "binary_trees.h"
/**
 * binary_tree_insert_right - nserts a node as the right-child 
 * @parent: pointer to the node to insert the right-child
 * @value: value to store in the new node
 * Return: new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new = binary_tree_node(parent, value);

	if (new == NULL)
		return (NULL);

	binary_tree_t *o_right = parent -> right;
	parent -> right = new;

	if (o_right != NULL)
	{
		o_right -> parent = new;
		new -> right = o_right;
	}

	return (new);
}
