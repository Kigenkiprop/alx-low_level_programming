#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: First string
 * @src: Second string
 * Return: Returns a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int max;

	i = 0;
	max = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[max] != '\0')
	{
		dest[i] = src[max];
		max++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
