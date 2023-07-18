#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees the struct dog and its elements from the heap
 * @d: A pointer to the struct dog
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
