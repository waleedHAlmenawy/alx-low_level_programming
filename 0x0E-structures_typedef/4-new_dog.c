#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - string length
 * @s: String
 * Return: String length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: A pointer to dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *c_name = malloc(_strlen(name) + 1);
	char *c_owner = malloc(_strlen(owner) + 1);
	int i = 0;
	dog_t *my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL || c_name == NULL || c_owner == NULL)
		return (NULL);

	while (name[i] != 0)
	{
		c_name[i] = name[i];
		i++;
	}
	c_name[i] = 0, i = 0;
	while (owner[i] != 0)
	{
		c_owner[i] = owner[i];
		i++;
	}
	c_owner[i] = 0;
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}
