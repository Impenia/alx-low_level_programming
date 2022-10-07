#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* array_range - A function that creates an array of integers
* @min: first number
* @max: last number
*
* Return: pointer to newly created array.
*/

int *array_range(int min, int max)
{
	int i, arr_len;
	int *ai;

	if (min > max)
		return (NULL);

	arr_len = max - min + 1;
	ai = malloc(sizeof(int) * (arr_len));

	if (ai == NULL)
		return (NULL);

	for (i = 0; i < arr_len; i++)
	{
		ai[i] = min;
		min++;
	}

	return (ai);
}
