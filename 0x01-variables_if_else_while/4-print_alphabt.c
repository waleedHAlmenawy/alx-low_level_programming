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

	for (i = 0; i <= 25; i++)
	{
		if(alphabet[i] == 'q' || alphabet[i] == 'e')
		{
			continue;
		}
		putchar(alphabet[i]);
	}

	putchar('\n');

	return (0);
}
