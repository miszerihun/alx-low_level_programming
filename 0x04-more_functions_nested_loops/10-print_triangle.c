#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size parameter of triangle
 * Returns: returns nothing
 */

void print_triangle(int size)
{
	int inc1, inc2;

	if (size > 0)
	{
		for (inc1 = 0; inc1 <= size; inc1++)
		{
			for (inc2 = size - inc1; inc2 > 0; inc2--)
			{
				putchar(' ');
			}
				for (inc2 = 0; inc2 < inc1; inc2++)
				{
					putchar('#');
				}
				else if (inc1 == size)
				{
					putchar('\n');
				}
				else
					putchar('\n');
		}
		}
}
