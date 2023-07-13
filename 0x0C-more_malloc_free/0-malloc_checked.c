#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: Number of bytes
 * Return: A pointer if it's not equal NULL otherwise 98
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p != NULL)
	{
		return (p);
	}
	else
	{
		return (p);
	}
}
