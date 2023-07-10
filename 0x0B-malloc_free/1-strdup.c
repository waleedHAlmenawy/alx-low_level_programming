#include <stdlib.h>
/**
 * _strlen - counts the length of a string
 * @str: String
 * Return: Length of a string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		i++;
	}

	return (i);
}
/**
 * _strdup - duplicates a string
 * @str: The string to duplicate
 * Return: A pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int len = _strlen(str), i = 0;
	char *heap = (char *)malloc(sizeof(char) * (len + 1));

	if (str == NULL || heap == NULL)
		return (NULL);
	while (i <= len)
	{
		heap[i] = str[i];
		i++;
	}
	return (heap);
}
