#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Function to return number of elements
 * @h: Pointer to the head ofa list
 * Return: Number of Elements
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
