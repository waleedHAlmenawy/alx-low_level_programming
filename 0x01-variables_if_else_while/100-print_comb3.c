#include <stdio.h>
/**
* main - Entry point
* Return: 0
*/

int main(void)
{
	int k, i;

	for (i = 0; i < 10; i++)
	{
		for (k = i; k < 10; k++)
		{
			if (i == k)
			{
				continue;
			}
			putchar(i + 48);
			putchar(k + 48);
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);

	return (0);
}
