#include <stdio.h>
#include <stdint.h>

/**
 * main - printfirst 50 fibonacci sequence starting with 1 & 2.
 *
 * Return: (0) Success
 */

int main(void)
{

int i;
long long int num1 = 1;
long long int num2 = 2;
long long int nextnum = mum1 + num2;

printf("%i, %i, %lli", num1, num2, nextnum);

for (i = 4; i <= 50; i++)
{
  num1 = num2;
  num2 = nextnum;
  nextnum = num1 + num2;

  printf(", %lli", nextnum);
}

printf("\n");

return (0);
}



