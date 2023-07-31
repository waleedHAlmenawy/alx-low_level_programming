#include "lists.h"
#include <stdio.h>
/**
 * listint_len - counts the number of nodes in a linked list
 * @h: The linked list
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int len = 0;

	if (h == NULL)
		return (0);

	while (1)
	{
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
