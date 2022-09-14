#include "main.h"
/**
 * jack_bauer - function that prints everyminutes of the day of jack_bauer start
 * n from 00:00 to 23:59, min loops counts mins, while hour loops counts hours
 * and resets mins
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_remainde;
	int mins_remainder;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
av
	hours_remainder - hours % 10;
_(hours/10 + '0');
_putchar(hours_remainder + '0');
_putchar(':');
_putchar(minuts/10 + '0');
_putchar(mins_remainder + '0');
mins++;
_putchar('\n');
		}
		hours++
			minutes = 0;
	}
}
