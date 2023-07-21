#include <stdarg.h>
/**
 * sum_them_all - Sums any number of arguments
 * @n: Number of argumenst
 * Return: The sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int x, s = 0, i = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	while (i < n)
	{
		x = va_arg(args, int);
		s += x;
		i++;
	}

	va_end(args);
	return (0);
}
