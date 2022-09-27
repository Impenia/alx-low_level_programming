#include "main.h"

/*
*
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, len =0;

	for (i = 0; s[i] != ','; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				len++;
			}
		}
	}
	return (len);
}
