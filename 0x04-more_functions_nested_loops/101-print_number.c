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

	if ((n / 10) > 0)
	{
		print_number(n / 10);
	}

	_putchar(48 + (n % 10));
}
