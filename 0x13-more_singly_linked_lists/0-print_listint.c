#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints integers in a linked list
 * @h: The linked list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int len = 0;

	if (h == NULL)
		return (0);

	while (1)
	{
		printf("%d\n", h->n);
		if (h->next == NULL)
		{
			len++;
			break;
		}
		h = h->next;
		len++;
	}
	return (len);
}
