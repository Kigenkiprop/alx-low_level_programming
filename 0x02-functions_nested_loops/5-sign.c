#include "main.h"

/**
 * print_sign - Function to determine the sign of a value
 * @n: Character to be evaluate
 * Return: Can be 0, 1 or -1 depending on the sign
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');

		return (0);
	}
	else
	{
		_putchar('-');

		return (-1);
	}
}
