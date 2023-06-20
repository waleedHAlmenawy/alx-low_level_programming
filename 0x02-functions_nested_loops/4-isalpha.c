#include "main.h"
/**
 * _isalpha - function definition
 * @c: character ascii code
 * Return: (1: is a letter, lowercase or uppercase, 0: otherwise)
 */
int _isalpha(int c)
{
	if (c >= 41)
		return (1);
	return (0);
}
