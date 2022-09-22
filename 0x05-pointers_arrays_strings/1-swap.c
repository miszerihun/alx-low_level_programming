#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: the first integer to be swapped
 * @b: the second integer to be swapped
 * Returns: nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
