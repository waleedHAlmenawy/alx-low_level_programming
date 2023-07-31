#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: A pointer to the linked list
 * @index: The index
 * Return: 1 when success, otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *temp, *temp1;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);
	temp = *head;
	while (i < index)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
		i++;
	}
	if (index != 0)
	{
		temp1 = temp->next;
		temp->next = temp->next->next;
		free(temp1);
	}
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
	}
	return (1);

}
