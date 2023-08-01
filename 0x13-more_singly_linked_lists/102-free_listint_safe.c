#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint_safe - frees a listint_t linked list safely
 * @h: The head of the linked list
 * Return: The number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	unsigned int len = 0, i = 0, check = 0;
	listint_t *head = *h, *test = *h, *temp;

	if (!h || !*h)
		return (0);
	while (head != NULL)
	{
		while (i < len && !check)
		{
			if (test == head || head->next == NULL)
			{
				if (test == head)
					temp->next = NULL;
				head = *h;
				check = 1, len = 0;
				break;
			}
			test = test->next;
			i++;
		}
		temp = head;
		head = head->next;
		if (check)
			free(temp);
		len++, i = 0, test = *h;
	}
	return (len);
}
