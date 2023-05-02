#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of listint_t
 * @head: Pointer to headof listint_t
 * @index: Index of node to be returned
 * Return: Pointer to the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head && (count <= index))
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
