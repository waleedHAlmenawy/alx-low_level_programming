#include "lists.h"
#include <stdio.h>

/**
 * beforeMain - executes before main function
 *
 */
void beforeMain(void) __attribute__((constructor));

void beforeMain(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
