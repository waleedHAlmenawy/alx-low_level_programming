#include <stdio.h>

/**
*main - Entry point
*Return: 0
*/

int main(void)
{
	int i, k, c;

	for (i = 0; i < 10; i++)
	{
		for (k = i; k < 10; k++)
		{
			for (c = k; c < 10; c++)
			{
				if (c == k || c == i || i == k)
					continue;
				putchar(i + 48);
				putchar(k + 48);
				putchar(c + 48);
				if (i == 7 && k == 8 && c == 9)
					continue;
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);

	return (0);
}
