#include "main.h"
#include <stdlib.h>

/*
*
*/

char *argtostr(int ac, char **av)
{
	int i;
	av = malloc(sizeof(char *) * ac);

	for (i = 0; i < ac; i++)
		av[i] = malloc(sizeof(char));
