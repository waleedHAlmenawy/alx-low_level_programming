#include "main.h"
/**
 * print_alphabet - function definition
 */
void print_alphabet(void)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";

	while (*alphabet)
	{
		_putchar(*alphabet);
		alphabet++;
	}
}
