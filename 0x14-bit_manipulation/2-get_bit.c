#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: Decimal number
 * @index: The index
 * Return: returns the value of a bit at a given index otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0, k = 0, n_bytes = 0;
	unsigned long int b_num = 1;

	n_bytes = sizeof(unsigned long int) * 8;

	if (index >= n_bytes)
		return (-1);
	if (n == 0)
	{
		return (0);
	}
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
			n -= b_num;
			if (i == (n_bytes - 1) - index)
				return (1);
		} else if (n < b_num && i == (n_bytes - 1) - index)
			return (0);
		i++, k = i, b_num = 1;
	}
	return (-1);
}
