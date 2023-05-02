#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - Adds a newnode to the beginning
 * @head: Pointer to pointer to a list
 * @n: Value of the new list
 * Return: Returns a pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
