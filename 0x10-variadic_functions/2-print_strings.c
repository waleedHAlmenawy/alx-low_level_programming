#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints argumenst of type string
 * @separator: Separate the arguments
 * @n: Number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *x;

	va_start(args, n);

	while (i < n)
	{
		x = va_arg(args, char *);
		printf("%s", x != NULL ? x : "(nil)");
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
		i++;
	}

	putchar(10);
	va_end(args);
}
