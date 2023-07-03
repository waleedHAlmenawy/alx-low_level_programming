#include "main.h"
/**
 * _memset - memory set
 * @s: Pointer
 * @b: Const Char
 * @n: Number of bits
 * Return: @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
