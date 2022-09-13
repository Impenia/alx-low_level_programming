#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c)

{
return (write(1, &c, 1));
}


/**
* print_alphabet - Print lowercase alphabets                                   *                                                                              * Return: void.                                                                */

void print_alphabet(void)
{
 
for (int i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');

}
