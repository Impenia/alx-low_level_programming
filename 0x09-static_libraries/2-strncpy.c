#include "main.h"

/**
* _strncpy - a function that copies a string
* @dest: string to copy to
* @src: string to copy from
* @n: max length of src string
*
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{

	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);

}
