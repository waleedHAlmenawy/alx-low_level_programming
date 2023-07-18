#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees the struct dog and its elements from the heap
 * @d: A pointer to the struct dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d->name);
	if (d != NULL)
		free(d->owner);
	free(d);
}
