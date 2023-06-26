#include "main.h"
/**
 * rev_string - reverse String
 * @s: String
 */
void rev_string(char *s)
{
	int i, j, k, n;

	for (i = 0; s[i] != '\0'; i++)
	{}
	char str[i];

	j = i;
	for (n = 0; n <= i; n++)
	{
		str[i] = s[i];
	}

	for (k = 0; k < i; k++)
	{
		s[j-1] = str[k];
		j--;
	}
}
