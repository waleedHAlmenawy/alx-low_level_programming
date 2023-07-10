#include <stdlib.h>
/**
 * _strlen - counts the length of a string
 * @s: A string
 * Return: The length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
/**
 * str_concat - concatenates two strings
 * @s1: First string
 * @s2: Second String
 * Return: A pointer to a string
 */
char *str_concat(char *s1, char *s2)
{
	int len, i = 0, k = 0;
	char *heap;

	len = _strlen(s1) + _strlen(s2);
	heap = (char *) malloc(sizeof(char) * (len + 1));

	if (heap == NULL)
		return NULL;

	if (s1 == NULL && s2 == NULL)
	{
		*heap = 0;
		return (heap);
	}
	if (s1 != NULL)
	{
		while (s1[i] != 0)
		{
			heap[i] = s1[i];
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[k] != 0)
		{
			heap[i] = s2[k];
			i++, k++;
		}
	}
	return (heap);
}
