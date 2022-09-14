#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

/**
 * main - printfirst 98 fibonacci sequence starting with 1 & 2.
 *
 * Return: (0) Success
 */

int main(void)
{

int i;
int64_t num1 = 1;
int64_t num2 = 2;
int64_t nextnum = num1 + num2;

printf("%" PRId64 "", num1);
printf(", %" PRId64 "", num2);

for (i = 3; i <= 98; i++)
{
printf(", %" PRId64 "", nextnum);
num1 = num2;
num2 = nextnum;
nextnum = num1 + num2;

}

printf("\n");

return (0);
}



