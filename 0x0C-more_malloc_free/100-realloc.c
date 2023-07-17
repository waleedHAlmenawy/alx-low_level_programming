#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: A pointer to the allocated memory
 * @old_size: Size of the allocated memory
 * @new_size: Size of the new allocated memory
 * Return: A pointer to the new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	char *mem;

	if (ptr == NULL)
	{
		mem = malloc(new_size);
		return (mem);
	}
	if (new_size > old_size)
	{
		mem = malloc(new_size);
		while (i < old_size)
		{
			mem[i] = ptr[i];
			i++;
		}
		free(ptr);
		return (mem);

	}
	if (old_size > new_size)
	{
		mem = malloc(new_size);
		while (i < new_size)
		{
			mem[i] = ptr[i];
			i++;
		}
		free(ptr);
		return (mem);
	}
	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	return (NULL);
}
