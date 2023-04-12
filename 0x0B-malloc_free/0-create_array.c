#include "main.h"
#include <stdlib.h>

/**
 * create_array - Funtion to create an array of chars
 * @size: size of array
 * @c: initializing character
 * Return: pointer to an array of characters
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
