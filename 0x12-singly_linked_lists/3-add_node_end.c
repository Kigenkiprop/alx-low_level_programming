#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a node to the end of a list
 * @head: Pointer to pointer to the head
 * @str: String to be duplicated
 * Return: Pointer to the new Node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t len;
	list_t *temp, *NewNode;

	NewNode = malloc(sizeof(list_t));

	if (NewNode == NULL)
		return (NULL);
	NewNode->str = strdup(str);
	for (len = 0; str[len]; len++)
		;
	NewNode->len = len;
	NewNode->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = NewNode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = NewNode;
	}
	return (*head);
}
