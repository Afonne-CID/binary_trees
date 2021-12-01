#include "binary_trees.h"

/**
 * binary_tree_is_leaf(const binary_tree_t *node);
 *
 * @node: Pointer to the node to check
 *
 * Return: 1 if `node` is a lead, otherwise 0 (and 0 for `NULL` value)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if ((!node->left && !node->right) && node->parent)
		return (1);
	return (0);
}
