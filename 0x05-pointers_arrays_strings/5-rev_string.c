#include <stdio.h>
#include "main.h"

/**
 *rev_string - a function that reverses a string.
 *@s: string to be reversed.
 *Return: void.

 */

void rev_string(char *s)

{

	int length = 0;
	int len = 0;
	char *a = s;
	int b = 0;
	int x;
	char y;

	while (*a != '\0')
	{
		a++;
		length++;

	}

	len = length - 1;

	for ( ; b < ((len / 2) + 1) ; b++)

	{
		x = (len - b);
		y = s[b];
		s[b] = s[x];
		s[x] = y;
	}

}
