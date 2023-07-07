#include "main.h"
/**
 * _abs - function definition
 * @i: intger
 * Return: 0
 */
int _abs(int n)
{
	int result;

	if (n >= 0)
	{
		result = n * 1;
	} else
	{
		result = n * -1;
	}

	return (result);
}
