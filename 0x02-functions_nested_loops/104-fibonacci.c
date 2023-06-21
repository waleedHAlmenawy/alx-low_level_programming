#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */

void print(long n)
{
    // If number is smaller than 0, put a - sign
    // and change number to positive
    if (n < 0) {
        putchar('-');
        n = -n;
    }

    // Remove the last digit and recur
    if (n/10)
        print(n/10);

    // Print the last digit
    putchar(n%10 + '0');
}

int main(void)
{
	int i;
	unsigned long num1, num2, num3;

	num1 = 0;
	num2 = 1;
	num3 = 0;
	
	for (i = 0; i < 98; i++)
	{
		num3 = num1 + num2;
		if (i == 97)
		{
			print(num3);
			printf("\n");
		} else
		{
			print(num3);
			printf(", ");
		}

		num1 = num2;
		num2 = num3;

	}
	return (0);
}
