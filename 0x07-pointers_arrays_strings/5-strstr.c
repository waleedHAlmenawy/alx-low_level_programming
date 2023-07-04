#include "main.h"
/**
 * _strstr - function definition
 * @haystack: String
 * @needle: String
 * Return: @haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i, k, check;

	i = 0, k = 0, check = 0;
	while (haystack[i] != 0)
	{
		while (needle[k] != 0)
		{
			if (haystack[i + k] == needle[k])
				check++;
			k++;
		}
		if (check == k)
		{
			return (haystack + i);
		}
		i++, k = 0, check = 0;
	}

	return (0);
}
