#include "main.h"
/**
 * _strncat - function definition
 * @dest: Pointer
 * @src: Pointer
 * @n: Number of Bits
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != 0)
	{
		i++;
	}

	while (src[j] != 0)
	{
		if (j < n)
		{
			dest[i] = src[j];
		} else if (j > n)
		{
			dest[i] = '\0';
			break;
		}
		i++;
		j++;
	}

	return (dest);
}
