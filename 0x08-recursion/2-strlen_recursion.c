#include "main.h"

/*
 *
 * _strlen_acursion - finds the length of a string.
 * @s: pointer to string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}
		return (_strlen_recursion(s + 1) + 1);
}
