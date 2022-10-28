#include "main.h"
/**
 * print_square  - Print a square
 *
 * @size: height and width of square
 *
 * Return: void
 *
 * desciprion: Prints a square with #
 */

void print_square(int size)
{
	int w, h;

	w = 0;
	h = 0;

	while (h < size)
	{
		while (w < size)
		{
			_putchar('#');
			w++;
		}
		w = 0;
		_putchar('\n');
		h++;
	}
}
