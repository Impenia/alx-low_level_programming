#include "main.h"

/** reset_to_98: function to update int parameter to 98 using pointer
*
* Return: Always 0 (Success)
*/

void reset_to_98(int *n)
{

int i = 0;
n = &i;
*n = 98;

_putchar(i / 10);
_putchar(i % 10);

}
