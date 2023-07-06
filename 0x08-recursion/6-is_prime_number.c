#include "main.h"

/**
 * helper - function definition
 * @n: Int
 * @fac: Int
 *
 * Return: 1 if it's prime, other wise 0
 */

int helper(int n, int fac)
{
	if (n <= 1)
	{
		return (0);
	}

	if (fac == 1)
	{
		return (1);
	}

	if (n % fac == 0)
	{
		return (0);
	}

	return (helper(n, fac - 1));
}

/**
 * is_prime_number - Check if a number is a prime number
 * @n: Int
 * Return: int
 */

int is_prime_number(int n)
{
	return (helper(n, n / 2));
}
