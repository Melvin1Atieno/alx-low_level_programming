#include "main.h"
/**
 * print_most_numbers - prints the numbers from 0 to 9 skips 2 and 4
 *
 * Return: void
 *
 * Description: Prints the numbers from 0 to 9 followed by new line
 */

void print_most_numbers(void)
{
	int i;

	i = 0;

	while (i <= 9)
	{
		if ((i != 2) && (i != 4))
		{
			_putchar((i % 10) + '0');
		}
		i++;
	}
	_putchar('\n');
}
