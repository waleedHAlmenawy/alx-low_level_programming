#include "main.h"
/**
 * print_number - function definition
 * @n: number
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n >= 1000)
	{
		_putchar(48 + (n / 1000));
	}
	if (n >= 100)
	{
		_putchar(48 + ((n / 100) % 10));
	}
	if (n >= 10)
	{
		_putchar(48 + ((n / 10) % 10));
	}

	_putchar(48 + (n % 10));
}
