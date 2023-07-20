#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: Number of arguments
 * @argv: An array of arguments
 * Return: 0 when success
*/
int main(int argc, char *argv[])
{
	int n, i = 0;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	ptr = (char *)main;
	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}
	while (i < n)
	{
		printf("%02hhx", ptr[i]);
		if (i != n - 1)
			putchar(' ');
		i++;
	}
	printf("\n");

	return (0);
}
