#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: Copy to it
 * @src: Copy form it
 * Return: @dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
