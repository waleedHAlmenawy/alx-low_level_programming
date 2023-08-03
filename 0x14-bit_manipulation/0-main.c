#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint("0");
    printf("result: %u\n", n);
    n = binary_to_uint("101");
    printf("result: %u\n", n);
    n = binary_to_uint("1e01");
    printf("result: %u\n", n);
    n = binary_to_uint("1100010");
    printf("result: %u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("result: %u\n", n);
    n = binary_to_uint("11111111111111111111111111111111");
    printf("result: %u\n", n);
    return (0);
}
