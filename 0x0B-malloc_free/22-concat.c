#include "main.h"
#include <stdlib.h>
#include <string.h>

/*
*
*/

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *string;
	int len1, len2, slen;
	len1 = strlen(s1);
	len2 = strlen(s2);
	slen = len1 + len2;
	string = malloc(sizeof(char) * (slen + 1));

	if (s1 == NULL && s2 == NULL)
		string = " ";

	if (string == NULL)
		return NULL;

	for (i = 0; i < len1; i++)
		string[i] = s1[i];

	for (j = 0; j < len2; j++)
	{
		string[i] = s2[j];
		i++;
	}

	string[i] = '\0';

	return (string);
}
