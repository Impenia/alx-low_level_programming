#include "main.h"

#define NULL ((void *)0);

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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s = s + i;
			return (s);
		}
	}
return (0);
}
