#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of the linked list
 */

void free_list(list_t *head)
{
	list_t *node = head;
	list_t *temp;

	while (ptr != NULL)
	{
		temp = node->next;
		free(node->str);
		free(node);
		node = temp;
	}
}
