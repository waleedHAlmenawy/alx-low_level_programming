#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - prints the data in a linked list
 * @h: The first node of the linked list
 * Return: The number of nodes in the linked list
 */
size_t print_list(const list_t *h)
{
	unsigned int num_of_nodes = 0, check = 1;
	list_t temp = *h;

	while (check && h != NULL)
	{
		if (temp.str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp.len, temp.str);
		if (temp.next == NULL)
			check = 0;
		else
			temp = *temp.next;
		num_of_nodes++;
	}

	return (num_of_nodes);
}
