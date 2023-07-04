#include "main.h"
/**
 * _memcpy - copies n characters from memory area src to memory area dest
 * @dest: copy to
 * @src: copy from
 * @n: number of bytes
 * Return: @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
