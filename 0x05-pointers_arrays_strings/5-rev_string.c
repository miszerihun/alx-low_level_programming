#include <stdio.h>
#include "main.h"

/**
 * rev_string - prints every other character
 * @str: string
 *
 * Return: nothing
 */

void rev_string(char *str)
{
int i = 0;

while (*(str + i) != '\0')
{
if (i % 2 == 0)
putchar(*(str + i));
i++;
}
putchar(10);
}
