#include "main.h"
#include <stdlib.h>
#include <string.h>

/*
*
*/

char *_strdup(char *str)
{
	int i;
	char *str2;
	int len = strlen(str);

	str2 = malloc(sizeof(char) * (len + 1));

	if (str == NULL || str2 == NULL)
		return NULL;

	for (i = 0; i < len; i++)
	{
		str2[i] = str[i];
	}
	str2[i] = '\0';

	return (str2);
}


