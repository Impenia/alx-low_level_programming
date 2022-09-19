#include <stdio.h>
#include <limits.h>
#include "main.h"

#define Is_NUMERIC_STRING(d) (*(char*)d >= 48) && (*(char*)d<= 57)
#define CONVERSION(d,k)  ((d<<3) +(d<<1))+(*(char*)k-48);

/**
* _atoi - function to converts a string to integer
* @s: strint to be converted
*
* Return: integer converted
*/

int _atoi(char *s)
{

	int sign = 1, base = 0, i = 0;

	/* if whitespaces then ignore.*/
	while (s[i] == ' ')
	{
	i++;
	}

	/* sign of number */
	if (s[i] == '-' || s[i] == '+')
	{
	sign = 1 - 2 * (s[i++] == '-');
	}

	/* checking for valid input */
	while (s[i] >= '0' && s[i] <= '9')
	{

	/* handling overflow test case */
	if (base > INT_MAX / 10 || (base == INT_MAX / 10 && s[i] - '0' > 7))
	{
		if (sign == 1)
		return (INT_MAX);
		else
		return (INT_MIN);
	}

	while (Is_NUMERIC_STRING(s))
	{
	i=(i*10)+ (*s-48);
	s++;
	}
	return (i);

	while( Is_NUMERIC_STRING(s))
	{
	i=CONVERSION(i,s);
	s++;
	}
	return (i);

	base = 10 * base + (s[i++] - '0');
	}

	return (base * sign);
}

