#include "main.h"
/**
 * _abs - function definition
 * @i: intger
 * Return: 0
 */
int _abs(int i)
{
	int result;

	if (i >= 0)
	{
		result = i * 1;
	} else
	{
		result = i * -1;
	}

	return (result);
}
