#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - a function that concatenates two strings
* @s1: first string
* @s2: second string
* @n: length of s2 to be appended
*
* Return: Pointer.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		n = strlen(s2);

	s3 = malloc(strlen(s1) + (n + 1));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
		s3[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		s3[i] = s2[j];
		i++;
	}
	s3[i] = '\0';

	return (s3);
}
