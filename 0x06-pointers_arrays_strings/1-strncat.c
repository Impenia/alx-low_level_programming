#include "main.h"

/**
* _strncat - a function to concatenate two strings
* @*dest: first string
* @*src: second string
* @n: length of src string
*
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{

	int ld = 0;
	int ls = n;

	while (*(dest + ld) != '\0')
	{
		_putchar(dest[ld]);
		ld++
	}

	while (*(src + ls) != '\0')
	{
		_putchar(src[len_src]);
		sc++
	}
	_putchar(10);
}
