#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n digit of an array
 * @a: array
 * @n: number of elements
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n; inc++)
	{
		printf("%d", a[inc]);
		if (inc != n - 1)
			printf(", ");
	}
	printf("\n");
}
