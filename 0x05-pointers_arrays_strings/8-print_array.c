#include<stdio.h>
#include "main.h"

/**
*print_array - function that prints elements of an array of integers.
*@a: value to be evaluated.
*@n: value to be evaluated.
*
*Return: void.
*/

void print_array(int *a, int n)
{

	int i;

	for (i = 0 ; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");

}
