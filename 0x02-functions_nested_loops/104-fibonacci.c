#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#define LARGEST 10000000000

/**
* main - Find and print the first 98 fibonacci numbers
* Return: 0 (Success).
*/

int main(void)
{

	int i;
	uint64_t num1 = 0, num11 = 1;
	uint64_t num2 = 0, num22 = 2;
	uint64_t nonda1, nonda2, nonda3;

	printf("%" PRId64 ", ", num11);
	printf("%" PRId64 ", ", num22);

	for (i = 3; i <= 98; i++)
	{
	if (num11 + num22 > LARGEST || num1 > 0 || num2 > 0)
	{
	nonda1 = (num11 + num22) / LARGEST;
	nonda2 = (num11 + num22) % LARGEST;
	nonda3 = num1 + num2 + nonda1;
	num1 = num2, num2 = nonda3;
	snum11 = num22, num22 = nonda2;

	printf("%lu%010lu", num2, num22);
	}
	else
	{
	nonda2 = (num11 + num22);
	num11 = num22, num22 = nonda2;

	printf("%" PRId64 "", spart_num2);
	}

	if (i != 98)
	{
	printf(", ");
	}
}
printf("\n");

return (0);

}
