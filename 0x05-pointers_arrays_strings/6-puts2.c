#include "main.h"
/**
 * puts2 - function definition
 * @str: String
 */
void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != 0)
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}

	_putchar(10);
}
