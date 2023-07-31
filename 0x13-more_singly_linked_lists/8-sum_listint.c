#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - sums the n in listint_t
 * @head: The linked list
 * Return: The sum of listint_t
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
