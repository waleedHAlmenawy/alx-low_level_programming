#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: Number of arguments passed in the command line
 * @argv: Number of arguments passed in the command line
 * Return: 0 when success
 */
int main(int argc, char *argv[])
{
	int amt_of_m = atoi(argv[1]), change = 0;

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	if (amt_of_m < 0)
	{
		printf("0\n");
		return (0);
	}
	if (amt_of_m >= 25)
	{
		change = amt_of_m / 25;
		amt_of_m -= 25 * (amt_of_m / 25);
	}
	if (amt_of_m >= 10 && amt_of_m < 25)
	{
		change += amt_of_m / 10;
		amt_of_m -= 10 * (amt_of_m / 10);
	}
	if (amt_of_m >= 5 && amt_of_m < 10)
	{
		change += amt_of_m / 5;
		amt_of_m -= 5 * (amt_of_m / 5);
	}
	if (amt_of_m >= 2 && amt_of_m < 5)
	{
		change += amt_of_m / 2;
		amt_of_m -= 2 * (amt_of_m / 2);
	}
	if (amt_of_m == 1)
	{
		change += 1;
	}
	printf("%d\n", change);
	return (0);
}
