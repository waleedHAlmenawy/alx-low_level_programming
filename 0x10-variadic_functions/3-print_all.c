#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints all types of arguments
 * @format: Arguments format
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, n;
	char *x;

	va_start(args, format);

	while (format[i] != 0)
	{
		i++;
	}
	n = i;
	i = 0;
	while (i < n)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				x = va_arg(args, char *);
				printf("%s", x != NULL ? x : "(nil)");
				break;
			default:
				i++;
				continue;
		}
		if (i != n - 1)
			printf(", ");
		i++;
	}
	putchar (10);
	va_end(args);

}
