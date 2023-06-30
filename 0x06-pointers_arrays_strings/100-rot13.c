#include "main.h"
/**
 * rot13 - function definition
 * @s: String
 * Return: @s
 */
char *rot13(char *s)
{

	char ref[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j = 0;

	while (s[i] != 0)
	{
		while (ref[j] != 0)
		{
			if (s[i] == ref[j])
			{
				s[i] = rot[j];
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
