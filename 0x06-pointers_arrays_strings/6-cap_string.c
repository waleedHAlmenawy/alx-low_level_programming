#include "main.h"
/**
 * cap_string - function definition
 * @s: String
 * Return: @s
 */
char *cap_string(char *s)
{
	int i, j;
	char sap[] = {9, 10, 11, 32, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 0};

	while (s[i] != 0)
	{
		if (s[i] >= 97 && s[i] <= 122 && i == 0)
			s[i] = s[i] - 32;
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
