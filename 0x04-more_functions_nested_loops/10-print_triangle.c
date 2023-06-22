#include "main.h"
/**
 * print_triangle - function definition
 * @size: triangle size
 */
void print_triangle(int size)
{
	int i, k, c;

	for (i = 0; i < size; i++)
	{
		for (k = i + 1; k < size; k++)
		{
			_putchar(' ');
		}

		for (c = 0; c <= i; c++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
	if (size == 0)
		_putchar('\n');
}
