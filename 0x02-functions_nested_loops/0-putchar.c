#include "main.h"

/**
 * main - Entry point
 * description: prints _putchar
 * Return: 0
 */

int main(void)
{
	char *str = "_putchar";

	for (; *str; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');

	return (0);
}
