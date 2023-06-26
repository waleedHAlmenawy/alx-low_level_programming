#include "main.h"
/**
 * _atoi - argument to intger
 * @s: pointer
 * Return: 0
 */
int _atoi(char *s)
{
	int num = 0, sign = 1;

	for (int i = 0; s[i] != 0; i++)
	{

		if (s[i] >= 48 && s[i] <= 57)
		{
			if (s[i - 1] == 43)
				sign = -1;
			num = num * 10 + (s[i] - 48);
		}
		if ((s[i] < 48 || s[i] > 57) && num != 0)
			break;
	}
	return (num);
}
