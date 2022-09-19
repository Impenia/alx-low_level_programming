#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
* _atoi - function to converts a string to integer
* @s: strint to be converted
*
* Return: integer converted
*/

int _atoi(char *s)
{

	int sign = 1, base = 0, i = 0;
	long num = 0;

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

    /* run till the end of the string is reached, or the */
    /* current character is non-numeric */
	
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
	num = num * 10 + (s[i] - '0');
        i++;
	}
	return num;

	base = 10 * base + (s[i++] - '0');
	}

	return (base * sign);
}

