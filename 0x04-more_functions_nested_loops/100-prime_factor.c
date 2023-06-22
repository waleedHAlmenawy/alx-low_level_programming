#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	long int i, num;

	num = 612852475143;

	i = 2;

	while (i < num)
	{
		if ((num % i) == 0)
		{
			num = num / i;
			i = 2;
		} else
		{
			i++;
		}
	}
	printf("%ld\n", num);

	return (0);
}
