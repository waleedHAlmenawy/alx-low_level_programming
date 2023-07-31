#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint_end - adds a new node at the end to a linked list
 * @head: The head of the linked list
 * @n: An integer to be added
 * Return: A pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	temp = *head;
	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (new);
}
