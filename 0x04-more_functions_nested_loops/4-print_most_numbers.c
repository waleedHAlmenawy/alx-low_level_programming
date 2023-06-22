#include "main.h"
/**
 * print_most_numbers - function definition
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar('0' + i)
	}

	_putchar('\n');
}
