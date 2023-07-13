#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: Min number
 * @max: Max number
 * Return: A pointer
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	while (min <= max)
	{
		p[i] = min;
		min++, i++;
	}
	return (p);
}
