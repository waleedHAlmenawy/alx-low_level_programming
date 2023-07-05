#include "main.h"
/**
 * _strlen_recursion - string length
 * @s: Strint
 * Return: Integer
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != 0)
	{
		i = 1 + _strlen_recursion(s + 1);
	}
	return (i);
}
