#include "main.h"

/**
 * print_rev - Function that prints a string in reverse
 * @s: String to be printed
 * Return: Void
 */

void print_rev(char *s)
{
	int counter = 0;
	int i;

	while (*s != '\0')
	{
		counter++;
		++s;
	}

	s--;

	for (i = counter; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
