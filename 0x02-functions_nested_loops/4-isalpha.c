#include "main.h"

/**
 * _isalpha - Function to check for letter
 * Return: 1 If the character is letter(s)
 * @c: A character to be evaluated
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) ||
			((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
