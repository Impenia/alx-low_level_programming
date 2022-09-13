#include "main.h"

/**
* times_table - print 9 times table
*
* Return: void
*/

void times_table(void)

int i, j, t;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
t = (j * i);
_putchar(t + '0');
_putchar(',');
_putchar(' ');
}
_putchar('\n');

}

}
