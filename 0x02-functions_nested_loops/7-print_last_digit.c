#include "main.h"

/**
* print_last_digit - Print last digit of a number
* @n: number to be checked
*
* Return: n.
*/

int print_last_digit(int n)
{

int ld;

ld = (n % 10);

_putchar(ld + '0');

_putchar('\n');

return (ld);

}
