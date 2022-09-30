#include "main.h"
#include <stdio.h>

/*
* main - a program that prints the number of arguments passed into it
* @argc: Argument count
* @argv: array of pointers
*
* Return: (0) Success
*/

int main(int argc, char *argv[])
{
	int ac = argc - 1;
	*argv = *argv;

	printf("%d\n", ac);
	return (0);
}
