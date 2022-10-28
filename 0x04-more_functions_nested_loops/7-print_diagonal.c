#include "main.h"

/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: The number of times the character _ is printed
 *
 * Return: void
 *
 * Description: prints a diagonal
 */

void print_diagonal(int n)
{
	int i, s;

	s = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			while (s <= i)
			{
				_putchar(' ');
				s++;
			}

			s = 0;
			_putchar('\\');
			_putchar('\n');
		}

	}
	else
	{
		_putchar('\n');
	}
}
