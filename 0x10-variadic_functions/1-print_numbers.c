#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - A function that prints numbers.
* @separator: string to be printed between numbers
* @n: number of integers passed to the function
* @...: variable number of arguments
*
* Return: void.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list n_args;

	va_start(n_args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(n_args, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(n_args);
}
