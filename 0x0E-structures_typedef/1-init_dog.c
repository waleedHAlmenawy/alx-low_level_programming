#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: A pointer to struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		struct dog my_dog;
		d = &my_dog;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
