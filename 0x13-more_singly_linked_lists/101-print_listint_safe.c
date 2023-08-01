#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: The head of the linked list
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int len = 0, i = 0, check = 0;
	const listint_t *h = head, *test;

	if (!head)
		return (0);
	while (head != NULL)
	{
		while (i < len)
		{
			if (test == head)
			{
				printf("-> [%p] %d\n", (void *) head, head->n);
				check = 1;
				break;
			}
			test = test->next;
			i++;
		}
		if (check)
			break;
		printf("[%p] %d\n", (void *) head, head->n);
		head = head->next;
		len++, i = 0, test = h;
	}

	return (len);
}
