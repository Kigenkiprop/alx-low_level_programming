#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: String to be scanned
 * @accept: String containing characters to match
 * Return: Pointer to the byte or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	long int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return ('\0');
}
