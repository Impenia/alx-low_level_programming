#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _realloc - A function that reallocates a memory block using malloc and free
* @ptr: pointer to previous memory
* @old_size: size of previous memory
* @new_size: size of new memory
*
* Return: pointer to new memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i;
	void *ptr2;

	ptr  = malloc(old_size);
	ptr2 = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	if (new_size > old_size)
		return (ptr2);

	if (ptr == NULL)
		ptr2 = ptr;

	if (new_size == 0 && ptr != NULL)
		return (NULL);

	for (i = 0; i < new_size; i++)
		ptr2[i] = ptr[i];

	return (ptr2);
	free(ptr);
}
