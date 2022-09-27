#include "main.h"
#include "2-strlen.c"

/**
* _strncat - concatenates two strings
* @dest: input value
* @src: input value
* @n: length of src string
*
* Return: void
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destlen = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[destlen] = src[i];
		destlen++;
	}
	dest[destlen] = '\0';
return (dest);
}
