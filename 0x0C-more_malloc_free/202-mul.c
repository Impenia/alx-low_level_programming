#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

/**
*
*/

int main(int argc, char *argv[])
{
	int i, num, mult = 1;
	unsigned int j;

	if (argc != 3)
		printf("Error\n");

	for (i = 1; i < argc; i++)
	{
		char *c = argv[i];

		for (j = 0; j < strlen(c); j++)
		{
			if (isdigit(atoi(argv[j])) != 0)
			{
				;
			}
		}
		num = atoi(argv[i]);
		mult = mult * num;
	}

	printf("%d\n", mult);

	return (0);
}


