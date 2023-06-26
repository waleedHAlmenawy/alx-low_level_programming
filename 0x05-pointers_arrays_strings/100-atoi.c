#include "main.h"
/**
 * _atoi - argument to integer
 * @s: pointer
 * Return: 0
 */
int _atoi(char *s)
{
	int num = 0, sign = -1, i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == '-')
			sign = sign * -1;

		if (s[i] >= 48 && s[i] <= 57)
		{

			num = num * 10 - (s[i] - 48);
		} else if (num != 0)
		{
			break;
		}
	}
	return (num * sign);
}
