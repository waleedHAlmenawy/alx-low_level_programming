#include "main.h"
/**
 * helper - help us finds squ root
 * @x: Int
 * @y: Int
 * Return: Int
 */
int helper(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x == y * y)
		return (y);
	return (helper(x, y - 1));
}
/**
 * _sqrt_recursion - function definition
 * @n: Int
 * Return: Int
 */
int _sqrt_recursion(int n)
{
	return (helper(n, n));
}
