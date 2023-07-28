#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * list_len - counts the number of nodes in a linked list
 * @h: The head of the linked list
 * Return: The number of nodes in the linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int len = 0, check = 1;
	list_t temp;

	if (h == NULL)
		return (0);
	temp = *h;
	while (check)
	{
		if (temp.next == NULL)
			check = 0;
		else
			temp = *temp.next;
		len++;
	}
	return (len);
}
