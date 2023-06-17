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
	int lasDgt = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	{
		printf("Last digit of %d is %d and is less than 5\n", n, lastDgt);
	} else if (lastDgt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDgt);
	} else if (lastDgt < 0 && lastDgt != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDgt);
	}

	return (0);
}
