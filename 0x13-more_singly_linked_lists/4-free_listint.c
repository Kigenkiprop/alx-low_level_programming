#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees listint_t
 * @head: Pointer to the head
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
