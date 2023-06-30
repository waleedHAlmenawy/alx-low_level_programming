#include "main.h"

/**
 * leet - encodes strings into 1337
 * @s: String
 * Return: @s
 */


char *leet(char *s)
{

	int i = 0, j = 0;

	char leetc[] = "aAeEoOtTlL";
	char leetn[] = "4433007711";

	while (s[i] != 0)
	{
		j = 0;

		while (j < 10)
		{

			if (leetc[j] == s[i])
			{
				s[i] = leetn[j];
			}
			j++;
		}
		i++;
	}

	return (s);
}
