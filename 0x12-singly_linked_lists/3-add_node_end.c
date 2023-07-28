#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node to a linked list
 * @head: A pointer to a pointer to a linked list
 * @str: A pointer to a string
 * Return: A pointer to the first node of the linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *node = *head;

	new = malloc(sizeof(list_t));

	if (!new || !head)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(new->str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (node->next != NULL)
		{
			node = node->next;
		}
		node->next = new;
	}

	return (new);
}
