#include "main.h"

/**
 * more_numbers -  prints the number 0 to 14 10 times
 *
 * Return: void
 *
 * Description: Prints 0 t 14 10 times
 */

void more_numbers(void)
{
	int times, i;

	times = 0;
	i = 0;

	while (times <= 9)
	{
		while (i <= 14)
		{
			if (i >= 10)
			{
				_putchar(((i / 10) % 10) + '0');
			}
			_putchar((i % 10) + '0');
			i++;
		}
		_putchar('\n');
		i = 0;
		times++;
	}
}
