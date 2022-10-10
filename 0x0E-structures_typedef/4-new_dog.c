#include <stdio.h>
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

	p_dog->name = malloc(lname + 1);
	p_dog->owner = malloc(lowner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		p_dog->name[i] = name[i];
	p_dog->name[i] = '\0';

	p_dog->age = age;

	for (i = 0; i < lowner; i++)
		p_dog->owner[i] = owner[i];
	p_dog->owner[i] = '\0';

	return (p_dog);
}


