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
	int i = 1, count = 0;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		if (atoi(argv[i]) == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}
		count += atoi(argv[i]);
		i++;
	}

	printf("%d\n", count);
	return (0);
}
