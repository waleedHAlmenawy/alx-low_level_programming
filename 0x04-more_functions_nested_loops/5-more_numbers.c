#include "main.h"
/**
 * more_numbers - function definition
 */
void more_numbers(void)
{
	int i, k;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < 15; k++)
		{
			if (k >= 10)
				_putchar(48 + (k / 10));
			_putchar(48 + (k % 10));
		}

		_putchar('\n');
	}
}
