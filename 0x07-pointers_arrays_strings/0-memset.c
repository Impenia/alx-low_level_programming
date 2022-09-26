#include "main.h"

/**
* _memset - function that fills memery with a constant byte
* @s: array pointer
* @b: constant byte
* @n: array size
*
* Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
} 
