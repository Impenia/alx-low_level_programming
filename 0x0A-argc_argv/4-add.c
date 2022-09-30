#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

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

	if (argc <= 1)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) >= 0 && atoi(argv[i]) <= 9)
		{
			num = atoi(argv[i]);
			sum = sum + num;
		}
		else
		{
			printf("Error\n");
			return (1);
			break;
		}
	}
	printf("%d\n", sum);
	return (0);
}

