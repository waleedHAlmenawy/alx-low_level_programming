#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints all types of arguments
 * @format: Arguments format
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *x;

	va_start(args, format);

	while (format[i] != 0)
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
		if (format[i + 1] != 0)
			printf(", ");
		else
			putchar(10);
		i++;
	}
	va_end(args);

}
