#include "main.h"

/**
* _abs - Compute absolute value of an integer
*@i: integer to be checked
*
* Return: absolute int 
*/

int _abs(int i)
{

i = (i >= 0) ? i : (-1*i);

return (i);

_putchar('\n');

}
