#include "main.h"

/**
* _strcmp - a function to compare string values
* @s1: first string
* @s2: second string
*
* Return: s1[i] - s2[i]
*/

int _strcmp(char *s1, char *s2)
{

	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		i++;
	}
	return (0);
}
