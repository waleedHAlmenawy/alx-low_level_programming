#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: Number of arguments passed in the command line
 * @argv: array of arguments passed in the command line
 * Return: 0 if success, otherwise 1
 */
int main(int argc, char *argv[])
{
	int money = atoi(argv[1]), change = 0, coins[5] = {25, 10, 5, 2, 1}, i = 0;

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	if (money < 0)
	{
		printf("0\n");
		return (0);
	}
	while (i < 5)
	{
		if (money > coins[i] || coins[i] == 1)
		{
			change += money / coins[i];
			money -= (money / coins[i]) * coins[i];
		}
		i++;
	}

	printf("%d\n", change);
	return (0);
}
