#include "main.h"

/**
 * rev_string - Reverses string
 * @s: The string to be modified
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, c, k, aux;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	c = i - 1;

	while (k < c)
	{
		aux = s[k];
		s[k] = s[c];
		s[c] = aux;
		k++;
		c--;
	}
}
