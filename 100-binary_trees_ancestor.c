#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 *
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node or NULL if none
 */
binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first, const binary_tree_t *second)
{
	int first_dp, second_dp;

	if (first == second->parent)
		return ((binary_tree_t *)first);
	else if (second == first->parent)
		return ((binary_tree_t *)second);

	first_dp = binary_tree_depth(first);
	second_dp = binary_tree_depth(second);

	if (first_dp >= second_dp)
		return (second->parent);
	return (first->parent);
}


/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 *
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Height or 0 for `NULL` value
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (tree->parent ? 1 + binary_tree_depth(tree->parent) : 0);
}
