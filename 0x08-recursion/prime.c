#include "main.h"

/*
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return 0;
	if (is_prime_number((n-1) % 2 == 0))
		return 0;
	else
		return 1;
}
