#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: String to be printed
 */

void _print_rev_recursion(char *s)
{
	unsigned int i = 0;

	if (s[i] == '\0')
	{
		return;
	}
	i++;
	_print_rev_recursion(s + i);
	_putchar(*s);
}
