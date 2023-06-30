#include "main.h"
/**
 * cap_string - function definition
 * @s: String
 * Return: @s
 */
char *cap_string(char *s)
{
	int i, j;
	char sap[] = {'\t', '\n', ' ', ',', ';', '.', '!', '?', 34, 40, 123, 0};

	while (s[i] != 0)
	{
		while (j < 12)
		{
			if (s[i] == sap[j])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
