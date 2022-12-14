#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_iterator - A function that executes a function given as a parameter
* @array: pointer to array of int
* @size: size of the array
* @action: function pointer to print regular or hex
*
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
