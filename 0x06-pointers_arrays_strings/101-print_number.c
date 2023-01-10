#include "main.h"
#include <limits.h>
/**
 * print_number - prints an integer
 * @n: integer to print
 * Return: void
 * Description: prints an integer
 */
void print_number(int n)
{
	if (n == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		n = INT_MAX;
	}
	else if (n == INT_MAX)
	{
		_putchar('2');
		_putchar('1');
		_putchar('4');
		_putchar('7');
		_putchar('4');
		_putchar('8');
		_putchar('3');
		_putchar('6');
		_putchar('4');
		_putchar('7');
		return;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n >= 10)
	{
		print_number(n / 10);
	}

	_putchar(n % 10 + '0');
}
