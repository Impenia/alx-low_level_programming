#include "main.h"
#include <stddef.h>

/**
* _strchr - function that locates a character in a string
* @s: string to be analyzed
* @c: character
*
* Return: c
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (!c)
	{
		return (s + i);
	}
	return (NULL);
}