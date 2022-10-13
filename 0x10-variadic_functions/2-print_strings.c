#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - A function that prints strings
* @separator: String to be printed
* @n: number of strings passed
* @...: variable arguments
*
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list n_args;

	va_start(n_args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(n_args, char *);
		if (string == NULL)
			printf("(nil)");

		printf("%s", string);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(n_args);
}
