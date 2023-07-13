#include <stdlib.h>
/**
 * _calloc - reserve an array in heap
 * @nmemb: Array's elements
 * @size: Size of each elements in bytes
 * Return: A pointer to an array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	int *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	while (i < nmemb)
	{
		p = malloc(size);
		if (p == NULL)
		{
			while (i != 0)
			{
				free(p[i]);
				i--;
			}
			free(p);
			return (NULL);
		}
		p++, i++;
	}
	p -= (nmemb - 1);
	i = 0;
	while (i < nmemb)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
