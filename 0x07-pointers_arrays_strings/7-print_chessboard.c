#include "main.h"
/**
 * print_chessboard - function definition
 * @a: 2D Array
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, k = 0;

	while (i < 8)
	{
		while (k < 8)
		{
			_putchar(a[i][k]);
			k++;
		}
		k = 0;
		_putchar('\n');
		i++;
	}
}
