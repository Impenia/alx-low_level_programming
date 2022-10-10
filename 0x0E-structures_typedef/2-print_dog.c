#include "dog.h"
#include <stdio.h>

/**
* print_dog - A function that prints a struct dog
* @d: struct dog
*
* Return: void
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name)
		{
			printf("%s\n", (*d).name);
		} else
		{
			printf("name: (nil)\n");
		}
		if ((*d).age)
		{
			printf("%.1f\n", (*d).age);
		} else
		{
			printf("(nil)\n");
		}
		if ((*d).owner)
		{
			printf("%s\n", (*d).owner);
		} else
		{
			printf("(nill)\n");
		}
	}
}
