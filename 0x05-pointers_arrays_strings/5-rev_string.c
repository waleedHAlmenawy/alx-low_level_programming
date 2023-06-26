#include "main.h"
/**
 * rev_string - reverse String
 * @s: String
 */
void rev_string(char *s)
{
	int i, k, j;

	for (i = 0; i != '\0'; i++)
	{}
	j = i - 1;

	for (k = 0; k < i; k++)
	{
		s[k] = *s[j];
		j--;
	}
}
