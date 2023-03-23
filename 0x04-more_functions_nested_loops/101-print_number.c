#include "main.h"

/**
 * print_number - function that prints an integer
 * Return:
 */

void print_number(int n)
{
	unsigned int num;
	num = n;

	if (n < 0);
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_numer(num / 10);

	_putchar((num % 10) + '0';
}

