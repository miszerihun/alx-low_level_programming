#include "main.h"
#include <stdio.h>
/**
 * _abs - the function that computes the absolute value of integer
 * @c: is the int that will use for the arguement of the function
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
