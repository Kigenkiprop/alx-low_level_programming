#include "main.h"

/**
 * _puts - Function that prints a string
 * @str: Sting to be printed
 * Return: Void
 */

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);
	_putchar('\n');
}
