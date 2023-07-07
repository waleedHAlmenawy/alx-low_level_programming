#include "main.h"
/**
 * _strcmp - compare 2 strings
 * @s1: First String
 * @s2: Second String
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i, count;

	i = 0;
	count = 0;

	while (s1[i] != 0 || s2[i] != 0)
	{
		if (s1[i] != s2[i])
		{
			count = s1[i] - s2[i];
			break;
		}
		i++;
	}

	return (count);
}
