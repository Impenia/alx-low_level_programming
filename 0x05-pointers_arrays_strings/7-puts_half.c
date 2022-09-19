#include <stdio.h>
#include "main.h"

/**
*puts_half - a function that prints half of a string.
*@str: string to be evaluated.
*
*Return: void.
*/

void puts_half(char *str)
{

	int length = 0;
	char *x = str;
	int i;

	while (*x != '\0')
	{
		x++;
		length++;
	}

	if (length % 2 == 0)
	{
		i = length / 2;
	}
	else
	{
		i = (length + 1) / 2;
	}

	for ( ; i < length ; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

}
