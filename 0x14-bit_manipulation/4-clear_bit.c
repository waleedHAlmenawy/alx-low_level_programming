#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: A pointer to a decimal number
 * @index: The index
 * Return: 1 when success, otherwise return -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0, k = 0, n_bytes = 0;
	unsigned long int b_num = 1, new = *n;

	n_bytes = sizeof(unsigned long int) * 8;

	if (index >= n_bytes || !n)
		return (-1);
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
		if (new >= b_num)
		{
			new -= b_num;
			if (n_bytes - 1 - index == i)
			{
				*n -= b_num;
				return (1);
			}
		}
		i++, k = i, b_num = 1;
	}
	return (1);
}
