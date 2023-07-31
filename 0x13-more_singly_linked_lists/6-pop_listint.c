#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: A pointer to the head of the linked list
 * Return: The head node’s data;
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}
