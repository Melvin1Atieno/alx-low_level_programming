#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the times tables starting with 0 to n
 * @n: The number from which the time table starts
 *
 * Return: void
 *
 * description: Prints the n times table
 */
void print_times_table(int n)
{
	int row, col, multi;

	row = 0;
	col   = 0;
	if ((n < 15) && (n > 0))
	{
		while (row <= n)
		{
			while (col <= n)
			{
				multi = row * col;

				if (col != 0)
				{
					if ((multi >= 10) && (multi < 100))
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(((multi / 10) % 10) + '0');
					}
					else if ((multi > 10) && (multi >= 100))
					{
						_putchar(',');
						_putchar(' ');
						_putchar(((multi / 100) % 10) + '0');
						_putchar(((multi / 10) % 10) + '0');
					}
					else
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
				}
				_putchar((multi % 10) + '0');
				col++;
			}
			row++;
			col = 0;
			_putchar('\n');
		}
	}
}
