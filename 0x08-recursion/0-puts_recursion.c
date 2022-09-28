#include "main.h"

/**
* _puts_recursion - a function that prints a string 
* @s: string to be printed
*
* Return: (0) Success
*/

void _puts_recursion(char *s)
{
	int i;
	
	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s);
	_puts_recursion(s);
}

