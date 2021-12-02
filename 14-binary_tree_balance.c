#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Factor or 0 for `NULL` value
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_tree = 0, r_tree = 0;

	if (!tree)
		return (0);

	l_tree = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	r_tree = tree->right ? 1 + binary_tree_balance(tree->right) : 0;

	return (l_tree - r_tree);
}
