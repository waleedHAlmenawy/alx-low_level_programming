#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - gets a node from a linked list
 * @head: The linked list
 * @index: The index
 * Return: The node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		i++;
	}
	return (head);
}
