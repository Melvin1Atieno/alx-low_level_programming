#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: number to print
 *
 * Return: int
 *
 * description: Checks the sign on numbers
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		n *= -1;
		return (n);
	}
	else
	{
		return (0);
	}
}
