#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: Pointer
 * @src: Pointer
 * Return: @dest, as pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, k;

	i = 0;
	k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	return (dest);
}
