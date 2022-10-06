#include "main.h"
#include <stdlib.h>

/**
* _calloc - A function that allocates memory for an array, using malloc
* @nmemb: number of array elements
* @size: bytes of array elements
*
* Return: pointer
*/

void *calloc(unsigned int nmemb, unsigned int size)
{
	int i, j;
	void *arr;

	arr = malloc(nmemb * size);

