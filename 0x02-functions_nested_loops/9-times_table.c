#include "main.h"
/**
 * times_table - function definition
 */
void times_table(void)
{
	int i, k, r;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < 10; k++)
		{
			r = i * k;

			if ((r / 10) != 0)
			{
				putchar(48 + (r / 10));
			} else if (k != 0)
			{
				putchar(' ');
			}
			putchar(48 + (r % 10));

			if (k != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}

}
