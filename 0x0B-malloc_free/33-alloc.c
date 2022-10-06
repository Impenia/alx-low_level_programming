#include "main.h"
#include <stdlib.h>

/*
*
*/

int **alloc_grid(int width, int height)
{
	int i;
	int **grid;
	grid = malloc(sizeof(int *) * width);

	if (grid == NULL)
		return NULL;

	for (i = 0; i < width; i++)
		grid[i] = malloc(sizeof(int) * height);

	return(grid);
}
