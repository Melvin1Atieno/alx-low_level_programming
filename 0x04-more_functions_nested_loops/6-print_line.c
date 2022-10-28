#include "main.h"

/**
 * print_line - draws a straight line on terminal
 * @n: The number of times the character _ is printed
 *
 * Return: void
 *
 * Description: prints a line
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}

	}
	_putchar('\n');
}
