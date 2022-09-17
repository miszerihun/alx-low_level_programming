#include <stdio.h>
#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: siz of the triangle
 * Returns: triangle of "#"s
 */

void print_triangle(int size)
{
	int inc1, inc2;

	if (size >= 0)
	{
		for (inc1 = 0; inc1 <= size; ro++);
		{
			for ((inc2 = size - inc1); inc2 > 0; inc2--)
			{
				_putchar(' ');
			}
				for (inc2 = 0; inc2 < inc1; inc2++)
				{
					_putchar('#');
				}
				if (inc1 == size)
		}
		continue;
	}
				_putchar('\n')
}
