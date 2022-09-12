#include <stdio.h>

/**
 * main -Entery point
 * Description: Use main function
 * Return: 0 Always 0 (Success)
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

printf("size of a char: %lu byte(s)", (unsigned long)sizeof(d));
printf("size of an int: %lu byte(s)", (unsigned long)sizeof(a));
printf("size of a long int: %lu byte(s)", (unsigned long)sizeof(b));
printf("size of a long long int: %lu byte(s)", (unsigned long)sizeof(c));
printf("size of a float: %lu byte(s)", (unsigned long)sizeof(f));
return (0);
}
