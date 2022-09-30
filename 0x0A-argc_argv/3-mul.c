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
	int arg1 = atoi(argv[1]);
	int arg2 = atoi(argv[2]);
	int mult = arg1 * arg2;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", mult);
	return (0);
}
