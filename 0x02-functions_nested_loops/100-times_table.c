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
					formatter(multi);
				}
				_putchar((multi % 10) + '0');
				col++;
			}
			row++;
			col = 0;
			_putchar('\n');
		}
	}
	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
}

void formatter(int n)
{
	if ((n >= 10) && (n < 100))
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(((n / 10) % 10) + '0');
	}
	else if ((n > 10) && (n >= 100))
	{
		_putchar(',');
		_putchar(' ');
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}
}
