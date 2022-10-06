#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - a function that allocates memory using malloc
* @b: number of bytes
*
* Return: Pointer
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit (98);

	return (mem);
}

