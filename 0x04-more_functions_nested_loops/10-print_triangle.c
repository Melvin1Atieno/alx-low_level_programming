#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: Size of triangle to be printed
 *
 * Return: void
 *
 * Description:  Prints triangle using # character
 */

void print_triangle(int size)
{
	int space, i, shebang;


	i = 0;
	space = 0;
	shebang  = 0;

	if (size > 0)
	{
		while (i < size)
		{
			while (space < (size - (i + 1)))
			{
				_putchar(' ');
				space++;
			}
			while (shebang <= i)
			{
				_putchar('#');
				shebang++;
			}
			i++;
			space = 0;
			shebang = 0;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
