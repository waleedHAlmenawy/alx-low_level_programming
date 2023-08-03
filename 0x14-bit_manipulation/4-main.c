#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;
    int i;

    n = 1024;
    i = clear_bit(&n, 10);
    printf("i: %d\n", i);
    printf("%lu\n", n);
    n = 0;
    i = clear_bit(&n, 10);
    printf("i: %d\n", i);
    printf("%lu\n", n);
    n = 98;
    i = clear_bit(&n, 1);
    printf("i: %d\n", i);
    printf("%lu\n", n);
    return (0);
}
