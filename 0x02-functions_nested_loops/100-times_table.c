#include "main.h"
/**
 * print_times_table - function definition
 * @n: number
 */
void print_times_table(int n)
{
	int i, k, r;

	for (i = 0; i <= n; i++)
	{
		if (n > 15 || n < 0)
			break;

		for (k = 0; k <= n; k++)
		{
			r = i * k;

			if ((r / 100) != 0)
			{
				_putchar(48 + (r / 100));
				_putchar(48 + ((r / 10) % 10));
			} else if (((r / 10) != 0) && ((r / 100) == 0))
			{
				_putchar(' ');
				_putchar(48 + (r / 10));
			} else if (k != 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			_putchar(48 + (r % 10));

			if (k != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
