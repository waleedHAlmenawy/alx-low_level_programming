#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
		if (d->age == 0.0)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
}