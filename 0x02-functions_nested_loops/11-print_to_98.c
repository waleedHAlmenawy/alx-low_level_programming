#include "main.h"
#include "_putchar.h"
/**
 * print_to_98 - function definition
 * @n: intger
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 0)
		{	int r = n * -1;
			_putchar('-');
			if ((r / 100) != 0)
				_putchar(48 + (r / 100));
			if ((r / 10) != 0)
				_putchar(48 + ((r / 10) % 10));
			_putchar(48 + (r % 10));
			_putchar(',');
			_putchar(' ');
			n++;
		}
		if (n == 0)
		{
			_putchar(48);
			_putchar(',');
			_putchar(' ');
			n++;
		}
		if (n > 0)
		{
			if ((n / 100) != 0)
				_putchar(48 + (n / 100));
			if ((n / 10) != 0)
				_putchar(48 + ((n / 10) % 10));
			_putchar(48 + (n % 10));
			_putchar(',');
			_putchar(' ');
			if (n < 98)
				n++;
			else
				n--;
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

int main()
{
	print_to_98(81);
}
