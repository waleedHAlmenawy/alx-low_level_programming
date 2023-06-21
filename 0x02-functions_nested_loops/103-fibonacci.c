#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long num1, num2, num3, count;

	num1 = 0;
	num2 = 1;
	num3 = 0;
	count = 0;

	for (i = 0; i < 50; i++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;

		if ((num3 % 2) == 0 && num3 < 4000000)
			count += num3;
	}

	printf("%ld\n", count);

	return (0);
}
