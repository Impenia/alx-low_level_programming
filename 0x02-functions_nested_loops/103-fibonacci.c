#include <stdio.h>
#include "main.h"

/**
* main - print sum of even fibonacci numbers
*
* Return: Success (0).
*/

int main(void)
{

int a;
int fibsum = 0;
int firstnum = 0;
int secondnum = 1;
int nextnum = firstnum + secondnum;

for (a = 1; a <= 50; a++)
{

if (nextnum > 4000000)
{
break;
}

nextnum = firstnum + secondnum;
firstnum = secondnum;
secondnum = nextnum;

if ((nextnum % 2) == 0)
{
fibsum = fibsum + nextnum;
}
}
printf("%i\n", fibsum);

return (0);
}
