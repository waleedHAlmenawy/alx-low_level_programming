#include "main.h"
/**
 * print_binary - prints binary number
 * @n: Decimal number
 */
void print_binary(unsigned long int n)
{
	int check = 0;
	unsigned int i = 0, k = 0, n_bytes = 0;
	unsigned long int b_num = 1;

	if (n == 0)
	{
		_putchar(48);
		return;
	}
	n_bytes = sizeof(unsigned long int) * 8;
	while (i < n_bytes)
	{
		while (k < n_bytes - 1)
		{
			if (i != n_bytes - 1)
			{
				b_num *= 2;
			}
			k++;
		}
		if (n >= b_num)
		{
			_putchar(49);
			n -= b_num;
			check = 1;
		} else if (n < b_num && check)
			_putchar(48);
		i++, k = i, b_num = 1;
	}
}
