#include <stdio.h>
#include <main.h>

/**
 * print_alpabet_x10 - Print 10 times lower alphabet
*
* Return: void.
*/

void print_alphabet_10x(void)
{
int i, j;

for (i = 0; i <= 9; i++)
{
for (i = 97; i <= 122; i++)
_putchar(i);
 }
 
_putchar("\n");