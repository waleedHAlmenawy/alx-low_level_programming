#include <stdio.h>
/**
 * main - entry point
 * @argc: Number of arguments passed in the command line
 * @argv: array of argument passed in the command line
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argv[0] != 0)
		printf("%d\n", argc - 1);
	return (0);
}
