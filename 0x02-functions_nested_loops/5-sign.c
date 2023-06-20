#include "main.h"
/**
 * print_sign - function definition
 * @n: intger
 * Return: (1: n is greater than zero, 0: n is zero, -1 n is less than zero)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	_putchar('-');
	return (-1);
}
