#include <stdio.h>
#include "main.h"

/**
*puts2 - prints every other character of a string.
*@str: string to be evaluated.
*
*Return: void.
*/

void puts2(char *str)
{

	int length = 0;
	int len = 0;
	char *x = str;
	int y;

	while (*x != '\0')
	{
		x++;
		length++;
	}

	len = length - 1;

	for (y = 0 ; y <= len ; y++)
	{
		if (y % 2 == 0)
		{
			_putchar(str[y]);
		}
	}
	_putchar('\n');
}
