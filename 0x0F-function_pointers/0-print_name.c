#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_name - A function that prints a name
* @name: pointer to name string
* @f: pointer function
*
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
