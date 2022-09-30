#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - A program that multiplies two numbers
* @argc: Argument count
* @argv: Array of pointers
*
* Return: (0) Success
**/

int main(int argc, char *argv[])
{
	int arg1, arg2, mult;

	if (argc >= 2)
	{
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);
	mult = arg1 * arg2;

	printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
