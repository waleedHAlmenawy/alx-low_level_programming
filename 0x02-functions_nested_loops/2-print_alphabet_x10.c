#include "main.h"
/**
 * print_alphabet_x10 - function definition
 */
void print_alphabet_x10(void)
{
	int i;
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 10; i++)
	{
		for(; *alphabet; alphabet++)
		{
			_putchar(*alphabet);
		}
		_putchar('\n');
	}
}
