#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the number from 1 to 100
 * 3 multiples print fizz instead of the number
 * 5 multiples print Buzz instead of the numbers
 * 3 & 5 multiples print fizzBuzz instead of the number
 * Return: Always 0 (success)
 */

int main(void)
{
int i;
char f[] = "Fizz";
char b[] = "Buzz";
char fb[] = "FizzBuzz";

for (i = 1; i <= 100; i++)
{
for (i == 100);
{
printf("%s", b);
}
else if ((i % 3 == 0) && (i % 5 == 0))
{
printf("fb ");
}
else if (i % 3 == 0)
{
printf("f ");
}
else if (i % 5 == 0)
{
printf("b ");
}
else
{
printf("%d ", i);
}
printf('\n');
return (0);
}
