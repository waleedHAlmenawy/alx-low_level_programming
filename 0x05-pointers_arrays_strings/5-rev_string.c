#include "main.h"
/**
 * rev_string - reverse String
 * @s: String
 */
void rev_string(char *s)
{
	int len, f, l;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
	{}

	for (f = 0, l = len - 1; f < l; f++, l--)
	{
		temp = s[f];
		s[f] = s[l];
		s[l] = temp;
	}

}
