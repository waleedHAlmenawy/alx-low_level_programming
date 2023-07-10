#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: The size we want to reserve in bytes
 * @c: The first character of the array
 * Return: A pointer to the reserved space
 */

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	t = (char *)malloc(sizeof(char) * size);

	if (t == NULL)
		return (NULL);
	while (i < size)
	{
		t[i] = c;
		i++;
	}

	return (t);
}
