#include <stdlib.h>
/**
 * _strlen - string length
 * @s: A string
 * Return: Length
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
	unsigned int i = 0, k = 0, lens1, lens2;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lens1 = _strlen(s1);
	lens2 = _strlen(s2);

	s = malloc((lens1 + n + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (n >= lens2)
		n = lens2;

	for (i = 0; i < lens1; i++)
	{
		s[i] = s1[i];
	}
	for (k = 0; k < n; k++)
	{
		s[lens1 + k] = s2[k];
	}
	s[n + lens1] = 0;
	return (s);
}
