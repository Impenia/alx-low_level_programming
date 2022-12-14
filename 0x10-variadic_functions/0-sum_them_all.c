#include <stdarg.h>
#include <stdio.h>

/**
* sum_them_all - A function that returns the sum of all its parts
* @n: number of arguments.
* @...: variable arguments
*
* Return: sum of arguments
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list n_arg;

	if (n == 0)
		return (0);

	va_start(n_arg, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(n_arg, unsigned int);
	}
	va_end(n_arg);

	return (sum);
}























