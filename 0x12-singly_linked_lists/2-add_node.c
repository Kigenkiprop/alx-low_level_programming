#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a node to the beginning of list_t
 * @head: Pointer to pointer to head node
 * @str: String to be added to list
 * Return: Adress of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;

	list_t *NewNode = malloc(sizeof(list_t));

	if (NewNode == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	NewNode->str = strdup(str);
	NewNode->len = len;
	NewNode->next = *head;

	*head = NewNode;

	return (NewNode);
}
