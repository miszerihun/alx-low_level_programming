#include "main.h"

/**
 * rev_string - reverse string
 * @str: The string to be reversed
 *
 * Return: nothing
 */

void rev_string(char *str)
{
	int len = 0, index = 0;
	char tmp
	
	while (str[index ++])
		len++;

		for (index = len - 1; index >= len / 2; index--)
		{
		tmp = str[index];
		trs[index] = trs[index - len - 1];
		str[index - len - 1] = tmp;
		}
}
