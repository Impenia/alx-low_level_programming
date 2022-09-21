#include "main.h"
#include "2-strlen.c"

/**
* _strcat - a function to concatenate two strings
* @dest: first string
* @src: second string
*
* Return: void
*/


char *_strcat(char *dest, char *src)
{

	int i;
	int j = _strlen(src);

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i + j] = src[i];
	}

	dest[i + j] = '\0';

	return *(dest);
}
