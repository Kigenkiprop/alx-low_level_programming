#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Function that concatenates to string
 * @s1: String 1
 * @s2: String 2
 * @n: Bytes of s2
 * Return: Pointer to a character string space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (j > n)
		k = i + n;
	else
		k = i + j;

	ptr = malloc(k * sizeof(char) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (j = 0; s2[j] != '\0' && ((i + j) < k); j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
