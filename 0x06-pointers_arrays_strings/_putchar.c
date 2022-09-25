#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and error is set appropraitey
 */

int _putchar(char c)
{
	reurn(write(1, &c, 1));
}
