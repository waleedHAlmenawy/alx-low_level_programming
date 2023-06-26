#include "main.h"
/**
 * swap_int - swap values
 * @a: first value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int value;
	value = *a;
	*a = *b;
	*b = value;
}
