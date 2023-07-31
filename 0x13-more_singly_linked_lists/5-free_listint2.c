#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - frees the heap and null a linked list
 * @head: A pointer to the head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (temp->next != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);
	*head = NULL;
}
