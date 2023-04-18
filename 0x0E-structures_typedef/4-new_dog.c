#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog -  function that creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2;
	dog_t *dog;

	len1 = strlen(name);
	len2 = strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->age = age;
	return (dog);
}
