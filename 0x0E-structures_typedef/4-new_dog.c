#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* new_dog - A function that creates a new dog
* @name: Name of new dog
* @age: Age of new dog
* @owner: Owner of new dog
*
* Return: struct dog else return NULL.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int a, d_name, d_owner;

	p_dog = malloc(sizeof(dog_t));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (d_name = 0; name[d_name]; d_name++)
		;

	for (d_owner = 0; owner[d_owner]; d_owner++)
		;

	p_dog->name = malloc(d_name + 1);
	p_dog->owner = malloc(d_owner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (a = 0; a < d_name; a++)
		p_dog->name[a] = name[a];
	p_dog->name[a] = '\0';

	p_dog->age = age;

	for (a = 0; a < d_owner; a++)
		p_dog->owner[a] = owner[a];
	p_dog->owner[a] = '\0';

	return (p_dog);
}


