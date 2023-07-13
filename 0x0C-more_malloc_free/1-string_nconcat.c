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

	if (s1 == NULL && s2 != NULL)
		s1 = "";
	if (s2 == NULL && s1 != NULL)
		s2 = "";
	if (s1 == NULL && s2 == NULL)
		s1 = "", s2 = "";

	lens1 = _strlen(s1);
	lens2 = _strlen(s2);

	s = malloc((lens1 + lens2 + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (n >= lens2)
		n = lens2;

	while (s1[i] != 0)
	{
		s[i] = s1[i];
		i++;
	}
	while (k < n && s2[k] != 0)
	{
		s[i] = s2[k];
		k++, i++;
	}
	s[i] = 0;
	return (s);
}
