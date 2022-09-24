#include "main.h"

/**
 * rev_string - reverses string
 * @s: The string to be reversed
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, c, k;
	char *a, aux;

	a = s;
	
	while (s[c] != '\0')
	{
		c++;
	}
		for (k = 1; k < c; k++)
		{
		aux = s[i];
		s[i] = *a;
		*a = aux;
		a--;
		}
}
