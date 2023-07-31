#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees all the allocated memory in the heap
 * @head: The linked list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
