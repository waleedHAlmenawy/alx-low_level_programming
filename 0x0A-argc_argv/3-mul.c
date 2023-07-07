#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: Number of arguments passed in the command line
 * @argv: array of arguments passed in the command line
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	} else
	{
		printf("Error\n");
	}

	return (0);
}
