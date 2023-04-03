#include "main.h"

/**
 * _memset - Fill the memeory with a contant byte
 * @s: First character
 * @b: Second Character
 * @n: Unsigned interger
 * Return: A string (Array of charcters)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned long int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
