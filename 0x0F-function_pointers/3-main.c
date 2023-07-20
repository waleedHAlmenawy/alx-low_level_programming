#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - entry point
 * @argc: Number of arguments
 * @argv: An array of arguments
 * Return: 0 when success
 */
int main(int argc, char *argv[])
{
	int result, fNum, sNum;
	int (*op)(int, int);

	fNum = atoi(argv[1]), sNum = atoi(argv[3]);
	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((sNum == 0 && *argv[2] == '/') || (sNum == 0 && *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = (*op)(fNum, sNum);

	printf("%d\n", result);

	return (0);
}
