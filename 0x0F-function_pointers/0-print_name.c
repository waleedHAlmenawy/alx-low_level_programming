#include <stdio.h>
/**
 * print_name - Function definition
 * @name: Name
 * @f: A pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		(*f)(name);
}
