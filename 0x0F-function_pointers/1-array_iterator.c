#include <stdio.h>
/**
 * array_iterator - executes a fun given as a param on each element of an array
 * @array: An array
 * @size: Number of elements
 * @action: Fuction to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
