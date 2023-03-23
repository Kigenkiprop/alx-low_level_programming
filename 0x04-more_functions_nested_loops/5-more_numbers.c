#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int n;
	int c;

	for (n = 0; n < 10; n++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar('0' + (c / 10));
			}
			_putchar('0' + (c % 10));
		}
		_putchar('\n');
	}
}
