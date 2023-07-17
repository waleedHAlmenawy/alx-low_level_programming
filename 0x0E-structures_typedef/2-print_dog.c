#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints the valuse of the struct dog
 * @d: A pointer to the struct dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
		printf("Age: %f\n", d->age == 0.00 ? "(nil)" : d->age);
		printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
}
