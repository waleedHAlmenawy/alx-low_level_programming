#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: Binary number
 * Return: Unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, k = 0, len = 0;
	unsigned int b_num = 1, d = 0;

	while (b[i] != 0)
	{
		if ((b[i] != 48 && b[i] != 49) || !b)
			return (0);
		i++;
	}
	len = i, i = 0;
	while (i < len)
	{
		if (b[i] == 49)
		{
			while (k < len - 1)
			{
				if (i != len - 1)
				{
					b_num *= 2;
				}
				k++;
			}
			d += b_num;
		}
		i++, k = i, b_num = 1;
	}
	return (d);
}
