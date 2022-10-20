#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets in lowercase 10 times
 *
 * description: print alphabet in lowercase 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int  count;

	count = 1;

	while (count <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');

		count++;
	}
}
