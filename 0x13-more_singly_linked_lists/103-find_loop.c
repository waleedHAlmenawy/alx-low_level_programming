#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * find_listint_loop - finds the loop in a listint_t linked list
 * @head: The head of the linked list
 * Return: The node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	unsigned int len = 0, i = 0;
	listint_t *h = head, *test;

	if (!head)
		return (NULL);
	while (head != NULL)
	{
		while (i < len)
		{
			if (test == head)
			{
				return (head);
			}
			test = test->next;
			i++;
		}
		head = head->next;
		len++, i = 0, test = h;
	}

	return (NULL);
}
