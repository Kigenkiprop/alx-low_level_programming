#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Print all elements in a list
 * @h: Pointer to a linked list of type listint_t
 * Return: Number of elements in the linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
