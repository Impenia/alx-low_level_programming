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

int addSum(int i, char *s)
{
	int j, sum = 0;

	for (j = 0; j < i; j++)
	{
	if (checkInteger(&(s + j)))
	{
		printf("Error\n");
		return (1);
	}
	else if (i == 1)
	{
		return sum;
	}
	else
	{
		sum += atoi(s + i);
		i--;
		return (sum + (addSum(i, (s - 1))));
	}
	}
	return (0);
}

int main(int argc, char *argv[])
{
	int sum;

	sum = addSum(argc, argv[argc]);

	printf("%d\n", sum);
	return (0);
}
