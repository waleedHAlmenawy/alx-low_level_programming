#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - reverses a single linked list
 * @head: The linked list
 * Return: A pointer to the head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *rev = *head;

	if (!head || !*head)
		return (NULL);
	if ((*head)->next == NULL)
		return (NULL):
	*head = (*head)->next;
	rev->next = NULL;

	while ((*head)->next != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		temp->next = rev;
		rev = temp;
	}
	(*head)->next = rev;
	rev = *head;
	return (rev);
}
