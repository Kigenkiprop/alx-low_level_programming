#include "main.h"

/**
 * print_most_numbers - Function to print 0 to 9 (not 2 & 4)
 * Return: void
 */

void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		if ((n == '2') || (n == '4'))
			;
		else
			_putchar(n);
	}
	_putchar('\n');
}
