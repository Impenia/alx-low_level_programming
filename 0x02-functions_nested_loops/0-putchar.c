#include <unistd.h>
#include "./main.h"

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
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
