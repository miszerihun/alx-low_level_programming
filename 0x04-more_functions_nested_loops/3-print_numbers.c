#include <stdio.h>
#include "main.h"

/**
 * main - print number 0-9
 *
 * Return: 0
 */

void print_numbers(void)
{
 int i;

 for (i = 48; i < 58; i++)
 {
 putchar(i);
 }
 putchar(10);
 }
