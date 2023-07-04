#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: String
 * @accept: Matching Characters
 * Return: @s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, k, check;

	i = 0, k = 0, check = 0;
	while (s[i] != 0)
	{
		while (accept[k] != 0)
		{
			if (s[i] == accept[k])
			{
				s += i;
				check = 1;
				break;
			}
			k++;
		}
		if (check)
			break;
		i++, k = 0;
	}

	if (check)
		return (s);
	return (0);
}
