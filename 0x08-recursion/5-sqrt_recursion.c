#include "main.h"

/**
 * find_root - Find the square root of a number
 * @n: Natural number to be evaluated
 * @root: root
 * Return: The square root
 */

int find_root(int n, int root)
{
	if ((root * root) > n)
		return (-1);
	if ((root * root) == n)
		return (root);
	return (find_root(n, root + 1));
}

/**
 * _sqrt_recursion - Return Square root of a number
 * @n: The natural number
 * Return: The square root of the number
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_root(n, 0));
}
