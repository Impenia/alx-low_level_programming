#include "main.h"

/**
* print_sign - print sign of a number
* @n: number to be checked
*
* Return: 1 if n > 0. Return 0 if n = 0. Return -1 if n < 0.
*/

int print_sign(int n)
{
if (n > 0)
{
  return (1);
}
else if (n == 0)
{
return (0);
}
else
{
return (-1);
}
_putchar('\n');
}
