#include <stdio.h>
#include "stdlib.h"

/**
 * main - prints either number or fizz or buzz or fizzBuzz
 *
 *
 * Return: returns 0
 */

int main(void)
{
	int i;

	while (i < 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("fizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("fizz ");
		}
		else if ((i % 5) == 0)
		{
			if (i != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz ");
			}
			printf("\n");
		}
		return (0);
}
