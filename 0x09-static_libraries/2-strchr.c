#include "main.h"
/**
 * _strchr - searches for the first occurrence of the character @c
 * @s: String
 * @c: Character
 * Return: @s
 */
char *_strchr(char *s, char c)
{
	int i, k;

	i = 0, k = 0;
	while (s[i] != 0)
	{
		i++;
	}

	while (*s != c && k <= i)
	{
		s++;
		k++;
	}
	return (s);
}
