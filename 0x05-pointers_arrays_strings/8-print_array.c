#include "main.h"
#include <stdio.h>
/**
 * print_array - function definition
 * @a: Pointer
 * @n: Index
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n)
			printf(", ");
	}
	printf("\n");
}
