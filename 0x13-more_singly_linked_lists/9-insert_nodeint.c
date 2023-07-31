#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: A pointer to the linked list
 * @idx: The index
 * @n: The integer to be inserted
 * Return: The node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i = 1;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *head;
	while (i < idx)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		i++;
	}
	if (idx != 0)
	{
		new->next = temp->next;
		temp->next = new;
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}

	return (new);
}
