#include "main.h"

/**
 * _puts_recursion - Function that prints a string & new line
 * @s: String to be printed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);

}
