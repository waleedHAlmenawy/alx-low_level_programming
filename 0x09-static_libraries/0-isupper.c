#include "main.h"
/**
 * _isupper - function definition
 * @c: character ascii code
 * Return: (1: is upper case, 0: otherwise)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
