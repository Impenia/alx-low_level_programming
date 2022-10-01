#include "main.h"

/**
* _strlen - a function that returns the length of a string
* @s: string to be evaluated
*
* Return: number of characters of string.
*/

int _strlen(char *s)
{

	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
