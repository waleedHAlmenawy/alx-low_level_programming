#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: String
 * @accept: Matching Characters
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, k, check;

	i = 0, k = 0, check = 0;

	while (s[i] != 0)
	{
		while (accept[k] != 0)
		{
			if (s[i] == accept[k])
			{
				check++;
			}
			k++;
		}

		if (!check)
			break;
		i++, k = 0, check = 0;
	}

	return (i);
}
