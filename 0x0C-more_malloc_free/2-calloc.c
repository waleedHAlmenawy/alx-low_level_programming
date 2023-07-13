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
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	while (i < (nmemb * size))
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
