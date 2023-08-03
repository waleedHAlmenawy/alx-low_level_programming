#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	/**
	 * b_or_l - test endianness
	 * @i: An integer
	 * @c: A character
	 */
	union
	{
		int i;
		char c[sizeof(int)];
	} b_or_l;
	b_or_l.i = 1;

	if (b_or_l.c[0] == 1)
	{
		return (1);
	}

	return (0);
}
