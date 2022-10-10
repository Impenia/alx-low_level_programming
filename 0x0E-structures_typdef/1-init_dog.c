#include "dog.h"

/**
* init_dog - a function that initializes a variable of type struct dog
* @d: struct dog
* @name: Name dog
* @age: Age of dog
* @owner: Owner of the dog
*
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
