#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to print who's last digit we print
 *
 * Return: int 0 Always
 *
 * description: Prints the last digit of a number
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n *= -1;
		last_digit = n % 10;
		_putchar(last_digit + '0');
	}
	else
	{
		last_digit = n % 10;
		_putchar(last_digit + '0');
	}
	return (last_digit);
}
