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
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *head;
	idx--;
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	new->next = temp->next;
	temp->next = new;

	return (new);
}
