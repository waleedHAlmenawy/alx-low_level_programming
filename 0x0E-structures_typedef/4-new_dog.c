#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: A pointer to dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (NULL);
	if (name != NULL)
	{
		my_dog->name = malloc(sizeof(strlen(name) + 1));
		if (my_dog->name == NULL)
		{
			free(my_dog);
			return (NULL);
		}

		strcpy(my_dog->name, name);

	}
	my_dog->age = age;
	if (owner != NULL)
	{
		my_dog->owner = malloc(sizeof(strlen(owner) + 1));
		if (my_dog->owner == NULL)
		{
			free(my_dog->name);
			free(my_dog);
			return (NULL);
		}

		strcpy(my_dog->owner, owner);

	}
	return (my_dog);
}
