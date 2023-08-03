#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	union b_or_l test;

	test.i = 1;

	if (test.c[0] == 1)
	{
		return (1);
	}

	return (0);
}
