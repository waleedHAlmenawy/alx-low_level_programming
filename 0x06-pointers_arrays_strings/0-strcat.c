#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: Pointer
 * @src: Pointer
 * Return: @dest, as pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, k, c, j = 0;

	for (i = 0; s1[i] != '\0'; i++)
	for (k = 0; s2[k] != '\0'; k++)
	for (c = 0; c < i + k + 1; c++)
	{
		if (c < i)
		{
			dest[c] = dest[c];
		} else
		{
			dest[c] = src[j];
			j++;
		}
	}

	return (*dest);
}
