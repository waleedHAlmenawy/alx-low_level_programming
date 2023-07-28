#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list
 * @head: start node
 */

void free_list(list_t *head)
{
	list_t *node = head;
	list_t *temp;

	while (node != NULL)
	{
		temp = node->next;
		free(node->str);
		free(node);
		node = temp;
	}
}
