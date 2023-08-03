#include "main.h"
/**
 * flip_bits - counts numbers of bits you would need to flip a num to another
 * @n: Decimal number
 * @m: Decimal number
 * Return: The numbre of bits to filp a number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0, k = 0, n_bytes = 0;
	unsigned long int b_num = 1;
	unsigned int count = 0;

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
		if (n >= b_num || m >= b_num)
		{
			if (n < b_num || m < b_num)
				count++;
			if (n >= b_num)
				n -= b_num;
			if (m >= b_num)
				m -= b_num;
		}
		i++, k = i, b_num = 1;
	}
	return (count);
}
