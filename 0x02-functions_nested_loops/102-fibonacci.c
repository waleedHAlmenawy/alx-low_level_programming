#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	long long int i, num1, num2, num3;

	num1 = 0;
	num2 = 1;
	num3 = 0;

	for (i = 0; i < 51; i++)
	{
		num3 = num1 + num2;
		if (i == 50)
		{
			printf("%lld\n", num3);
		} else
		{
			printf("%lld, ", num3);
		}

		num1 = num2;
		num2 = num3;

	}
	return (0);
}
