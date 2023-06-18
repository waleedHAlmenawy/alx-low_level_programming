#include <stdio.h>
/**
* main - Entry point
* Return: 0
*/
int main(void)
{
	int i, k, c, j;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < 10; k++)
		{
			for (c = 0; c < 10; c++)
			{
				for (j = 1; j < 10; j++)
				{
					putchar(i + 48);
					putchar(k + 48);
					putchar(32);
					putchar(c + 48);
					putchar(j + 48);
					if (j == 9 && c == 9 && i == 9 && k == 9)
						continue;
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}
