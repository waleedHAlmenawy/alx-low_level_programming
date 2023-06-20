#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * description: prints _putchar
 * Return: 0
 */

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i <= strlen(str); i++)
	{
		putchar(str[i]);
	}

	putchar('\n');

	return (0);
}
