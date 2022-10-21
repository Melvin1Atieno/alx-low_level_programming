#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times tables, starting with 0
 *
 * Return: void
 *
 * description: Prints the 9 times table
 */
void times_table(void)
{
	int row, col, multi;

	row = 0;
	col   = 0;

	while (row < 10)
	{
		while (col < 10)
		{
			multi = row * col;

			if (col != 0)
			{
				if (multi >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((multi / 10) % 10) + '0');
					_putchar((multi % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((multi % 10) + '0');
				}
			}
			else
			{
				_putchar((multi % 10) + '0');
			}
			col++;

		}
		row++;
		col = 0;
		_putchar('\n');
	}
}
