#include <stdlib.h>
/**
 * _strlen - counts the length of a string
 * @s: A string
 * Return: length
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
 * argstostr - concatenates all the arguments of your program
 * @ac: Number of arguments
 * @av: arguments
 * Return: A pointer to an array of arguments
 */
char *argstostr(int ac, char **av)
{
	int slen = 0, i = 0, k = 0, j = 0;
	char *coStr;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (k < ac)
	{
		slen += _strlen(av[k]);
		k++;
	}
	coStr = (char *)malloc(sizeof(char) * (slen + ac + 1));
	if (coStr == NULL)
		return (NULL);
	k = 0;
	while (i < ac)
	{
		while (k < _strlen(av[i]))
		{
			coStr[j] = av[i][k];
			k++, j++;
		}
		coStr[j] = 10;
		i++, j++, k = 0;
	}
	return (coStr);
}
