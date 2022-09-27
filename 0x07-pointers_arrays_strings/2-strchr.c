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
	int add = 0;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			add = 1;
			return (s + i);
		}
	}
	if (add == 0)
	{
		return (s + i);
	}
	return (NULL);
}
