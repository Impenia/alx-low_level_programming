#include <unistd.h>
#include "./main.h"

/**
* main - print out _putchart
*
* Return: Alwways 0 (Success).
*/

int main(void)
{
int i;
char a[] = "_putchar";

for (i = 0; i < 8; i++)
{
_putchar(a[i]);
}
_putchar('\n');

return (0);
}
