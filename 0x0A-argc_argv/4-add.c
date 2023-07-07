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
	int i = 1, k = 0, count = 0;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		while (argv[i][k] != 0)
		{
			if (argv[i][k] >= 48 && argv[i][k] <= 57)
			{
				k++;
			} else
			{
				printf("Error\n");
				return (0);
			}
		}
		count += atoi(argv[i]);
		i++, k = 0;
	}

	printf("%d\n", count);
	return (0);
}
