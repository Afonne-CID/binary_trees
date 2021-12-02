#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 *
 * @tree: Pointer to the root node of the tree to count the leaves
 *
 * Return: Number of leaves or 0 for `NULL` value
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l_size, r_size;

	if (!tree)
		return (0);
	l_size = tree->left ? binary_tree_leaves(tree->left) : 0;
	r_size = tree->right ? binary_tree_leaves(tree->right) : 1;

	return (l_size + r_size);
}
