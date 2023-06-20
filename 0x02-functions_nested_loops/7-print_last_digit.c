#include "main.h"
/**
 * print_last_digit - function definition
 * @i: intger
 * Return: 0
 */
int print_last_digit(int i)
{
	int result = i % 10;

	_putchar(48 + result);
	return (i % 10);
}
