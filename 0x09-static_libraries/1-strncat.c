#include "main.h"

/**
* _strncat - a function to concatenate two string with src <= n
* @dest: first string
* @src: second string
* @n: max length of second string
*
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)

{

	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);

}
