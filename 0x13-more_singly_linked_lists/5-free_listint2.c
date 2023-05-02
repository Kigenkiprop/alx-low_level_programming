#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Function that frees a listint_t
 * @head: Pointer to pointer to head
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	*head = NULL;
}
