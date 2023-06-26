#include "main.h"
/**
 * puts_half - function definition
 * @str: String
 */
void puts_half(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != 0)
	{
		len++;
	}

	if (len / 2 != 0)
		len--;

	for (i = 0; i < len; i++)
	{
		if (i > (len / 2))
			_putchar(str[i]);
	}

	_putchar(10);
}
