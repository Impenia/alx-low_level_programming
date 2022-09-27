#include "main.h"
#include "_putchar.c"

/**
*
*
*/

void reverse_array(int *a, int n)
{
	int i, j;
	j = n - 1;

	for (i = 0; i < j; i++)
	{
		if (j-i > 0) 
		{	
			a[i] = a[j-i];
		}else if (j-i < 0)
			
	}
}
