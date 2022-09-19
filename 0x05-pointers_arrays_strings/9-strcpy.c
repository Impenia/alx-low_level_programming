#include<stdio.h>
#include "main.h"

/**
*_strcpy - a function that copies a string.
*@dest: value to be evaluate.
*@src: value to be evaluate.
*
*Return: not.
*/

char *_strcpy(char *dest, char *src)
{

	int x = 0;
	int y = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}

	for ( ; y < x ; y++)
	{
		dest[y] = src[y];
	}

	dest[x] = '\0';

	return (dest);

}
