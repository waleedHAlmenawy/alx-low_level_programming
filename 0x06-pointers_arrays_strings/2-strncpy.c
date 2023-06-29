#include "main.h"
/**
 * _strncpy - copies string from src to dest
 * @dest: Pointer
 * @src: Pointer
 * @n: Number of Bits
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
