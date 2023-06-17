#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * Return: Always (0) Success
 */
int main(void)
{

	int n;
	int l_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is less than 5\n", n, l_digit);
	} else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l_digit);
	} else if (last_digit < 0 && last_digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_digit);
	}

	return (0);
}
