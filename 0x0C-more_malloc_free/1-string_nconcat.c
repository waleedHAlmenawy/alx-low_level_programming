#include <stdlib.h>
/**
 * _strlen - string length
 * @s: A string
 * Return: The length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes
 * Return: A string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lens1, lens2, i = 0, k = 0;
	char *s;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL && s2 != NULL)
		s1 = "";
	if (s2 == NULL && s1 != NULL)
		s2 = "";

	lens1 = _strlen(s1);
	lens2 = _strlen(s2);

	s = malloc((lens1 + lens2 + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (n >= lens2)
		n = lens2;

	while (i < lens1 && *s1 != 0)
	{
		s[i] = s1[i];
		i++;
	}
	while (k < n)
	{
		s[i] = s2[k];
		k++, i++;
	}
	s[i] = 0;
	return (s);
}
