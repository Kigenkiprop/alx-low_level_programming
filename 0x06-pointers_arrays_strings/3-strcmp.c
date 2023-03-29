#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: String 1 to be compared
 * @s2: String 2 to be compared
 * Return: 0 if s1 and s2 are equal
 *	Another Integrer if s1 is les than or greater than s2i
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
