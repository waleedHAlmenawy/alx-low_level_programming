#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: A pointer to struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name == NULL ? "name" : name;
	d->age = age == NULL ? 0 : age;
	d->owner = owner == NULL ? "owner" : owner;
}
