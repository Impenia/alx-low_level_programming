#include <stdio.h>
#include "main.h"

/**
* print_to_98 - Print all natural numbers from n to 98
* @n: number start
*
* Return: (1).
*/

void print_to_98(int n)
{

int i;

for (i = n; i <= 98; i++)
{
printf("%i", i);
if (i < 98)
{
printf(", ");
}
else
{
printf("\n");
}

}

}
