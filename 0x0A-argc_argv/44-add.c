#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
*
*/

int checkInteger(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if(*(s + i) < 48 || *(s + i) > 57)
			return (1);
	}
	return (0);
}

int main(int argc, char *argv[])
{
	int sum = 0;

	while (--argc)
	{
		if (checkInteger(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
	}
