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
	int i, k, c;

	i = 0, k = 0, c = 0;
	while (src[k] != 0)
	{
		k++;
	}

	while (dest[c] != 0)
	{
		c++;
	}

	while (i < c)
	{
		if (i < n && i < k)
		{
			dest[i] = src[i];
		} else if (n > k && i < n)
		{
			dest[i] = 0;
		}
		i++;
	}

	return (dest);
}
