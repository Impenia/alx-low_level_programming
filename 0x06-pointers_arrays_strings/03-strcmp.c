#include "main.h"
#include "2-strlen.c"
#include "_putchar.c"

/**
*
*
*/

int _strcmp(char *s1, char *s2)
{
	int i;
	int diff;

	for (i = 0; (s1[i] != '\0' &&  s2[i] != '\0'); i++)
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			return(diff);
		}
	}
return(0);
}

		
