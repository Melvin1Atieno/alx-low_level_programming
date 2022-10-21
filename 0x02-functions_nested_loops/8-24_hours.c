#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints the minutes in a 24 hour system
 *
 * Return: void
 *
 * description: Prints the hours
 */
void jack_bauer(void)
{
	int hours,min;

	hours = 0;
	min   = 0;

	while (hours < 24)
	{
		while (min < 60)
		{
			_putchar(((hours / 10) % 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar(((min / 10) % 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		hours++;
		min = 0;

	}
}
