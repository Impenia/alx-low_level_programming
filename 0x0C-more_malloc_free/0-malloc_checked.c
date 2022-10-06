#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* malloc_checked - a function that allocates memory using malloc
* @b: number of bytes
*
* Return: Pointer
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);

	if (p == NULL)
		exit (98);

	return (p);
}

