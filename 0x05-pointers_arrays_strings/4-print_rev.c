#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: String
 */

void print_rev(char *s)
{
	int i, k, j;

	for (i = 0; s[i] != '\0'; i++)
	j = i + 1;

	for (k = 0; k <= i; k++)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar(10);
}
