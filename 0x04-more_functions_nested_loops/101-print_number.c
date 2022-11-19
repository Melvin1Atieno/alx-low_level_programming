#include "main.h"
/**
 * print_number - pirnts an integer
 * @n: integer to print
 *
 * Return: void
 * Description: A function that prints an integer using _putchar
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n -= n;
	}
	if (n / 10 != 0)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
