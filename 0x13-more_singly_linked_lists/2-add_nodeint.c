#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint - adds a new node at the beginning to a linked list
 * @head: The head of the linked list
 * @n: An integer to be added
 * Return: A pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
