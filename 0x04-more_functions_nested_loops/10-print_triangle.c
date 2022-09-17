#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: siz of the triangle
 * Returns: triangle of "#"s
 */

void print_triangle(int size)
{
	int sp, ro; tr;

	if (size <= 0)
	{
		_putchar('\n');
		for (ro = 0; ro <= (size - 1); ro++);
		{
			for (sp = 0; (size - 1) - ro; sp++)
			{
				_putchar(' ');
			}
				for (tr = 0; tr <= ro; tr++)
				{
					_putchar('#');
				}
				_putchar('\n');
		}
	}
}
