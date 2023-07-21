#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints number with separator
 * @separator: A string
 * @n: Number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);

	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
		i++;
	}

	putchar(10);
	va_end(args);
}
