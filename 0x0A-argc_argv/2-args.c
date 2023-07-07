#include <stdio.h>
/**
 * main - entry point
 * @argc: Number of arguments passed in the command line
 * @argv: Number of arguments passed in the command line
 * Return: 0 when success
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
