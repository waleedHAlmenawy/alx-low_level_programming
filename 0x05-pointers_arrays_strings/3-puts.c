#include "main.h"
/**
 * _puts - print a string
 * @str: String
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	-putchar(10);
}
