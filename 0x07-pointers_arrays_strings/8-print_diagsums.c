#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function definition
 * @a: Pointer
 * @size: Size
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int s = 0, s2 = 0;
	int i;
	int *arr = a;

	for (i = 0; i < size; i++)
	{
		s += arr[i];
		s2 += arr[size - i - 1];
		arr += size;
	}

	printf("%d, ", s);
	printf("%d\n", s2);
}
