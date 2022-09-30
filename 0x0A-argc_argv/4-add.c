#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
* main - A program that adds positive numbers
* @argc: Argument count
* @argv: Array of pointers
*
* Return: (0) Success
**/

int main(int argc, char *argv[])
{
	int i, num, sum = 0;
	unsigned int j;

	if (argc <= 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		char *c = argv[i];

		for (j = 0; j < strlen(c); j++)
		{
			if (isdigit(c[j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);
		sum = sum + num;
	}
	if (sum > 0)
	{
	printf("%d\n", sum);
	}
	return (0);
}

