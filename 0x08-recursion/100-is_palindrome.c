#include "main.h"
/**
 * _strlen - counts the length of a string
 * @s: A pointer to a string
 * Return: Length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen(s + 1));
}

/**
 * helper - helps to check if a string is a palindrome
 * @s: A pointer to a string
 * @f_index: First index of a string
 * @l_index: Last index of a string
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int helper(char *s, int f_index, int l_index)
{
	if (s[f_index] != s[l_index])
	{
		return (0);
	}
	else if (f_index >= l_index)
	{
		return (1);
	}

	return (helper(s, f_index + 1, l_index - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: A pointer to a string
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len <= 1)
	{
		return (1);
	}

	return (helper(s, 0, len - 1));
}
