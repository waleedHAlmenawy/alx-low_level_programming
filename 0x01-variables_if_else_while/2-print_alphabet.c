#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i <= 24; i++)
	{
		putchar(alphabet[i]);
	}

	putchar('\n');

	return (0);
}
