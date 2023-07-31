#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * free_listint2 - frees the heap and null a linked list
 * @head: A pointer to the head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (!head || !*head)
	{
		return;
	}

	node = *head;

	while (node)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}

}
