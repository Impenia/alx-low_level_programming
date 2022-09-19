#include "main.h"

/**
* swap_int - a function to swap two integers
* @a: variable to be swapped
* @b: variable to be swapped
*
* Return: Void
*/

void swap_int(int *a, int *b)
{

	int i = *a;
	*a = *b;
	*b = i;

}
