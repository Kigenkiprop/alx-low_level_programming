#include "main.h"

/**
 * _pow_recursion - Value of x raised to power y
 * @x: Value to be raised
 * @y: Power
 * Return: The power of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	y--;
	return (x * (_pow_recursion(x, y)));
}
