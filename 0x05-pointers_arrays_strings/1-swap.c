#include "main.h"

/**
 * swap_int - swaps two integers' values
 * @a: first integer
 * @b: second integer
 * Returns: nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	tmp = *b;
}
