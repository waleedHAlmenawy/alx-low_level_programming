#include "main.h"
/**
 * reverse_array - function definition
 * @a: Integer
 * @n: Number of array elements
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = 0, j = n - 1, temp = 0;

	while (i != j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
