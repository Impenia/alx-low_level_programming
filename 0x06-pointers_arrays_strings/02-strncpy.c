#include "main.h"
#include "2-strlen.c"

/**
*
*
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int srclen = _strlen(src);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}	
	for (i = srclen; i < n; i++)	
	{
	dest[i] = '\0';
	}

return (dest);
}
