#include "./main.h"

/**
* main - Print _putchar
*
* Return: Always (0) Success
*/

int main(void)
{

int i;
char a[] = "_putchar";

for (int i = 0; i < 8; i++)
{
_putchar(a[i]);
}
_putchar("\n");

return (0);
}


