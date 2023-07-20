#include <stdio.h>
/**
 * int_index - searches for an integer
 * @array: An array of integers
 * @size: Number of elements in the array
 * @cmp: A pointer to fun that compares
 * Return: Number of elements that matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				break;
			i++;
		}
	}
	if (i == size)
		return (-1);
	return (i);

}
