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
int i;
char a[];

for (i = 0; i < 8; i++)
{
_putchar(a[i]);
}
_putchar('\n');
return (0);
}

  
/**
* print_alphabet - Print lowercase alphabets                                   *                                                                              * Return: void.                                                                */

void print_alphabet(void);


/**
* print_alphabet_x10 - Print lowercase alphabets 10 times
*
* Return: void.
*/

void print_alphabet_x10(void);
