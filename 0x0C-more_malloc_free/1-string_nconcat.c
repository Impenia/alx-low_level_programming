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
	unsigned int s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	if (s1 == NULL)
		s1 = "";

	if (s2_len <= 0)
		s2 = "";

	void *s3 = malloc(strlen(s1) + (n + 1));

	if (s3 = NULL)
		return null;

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
