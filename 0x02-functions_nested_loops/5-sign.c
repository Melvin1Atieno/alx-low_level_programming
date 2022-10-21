#include <stdio.h>
#include "main.h"

/**
 * print_sign - checks number sign for number n
 * @n: The number to check
 *
 * Return: 1 on positive, 0 on zero and -1 on negative
 *
 * description: Checks the sign on numbers
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
