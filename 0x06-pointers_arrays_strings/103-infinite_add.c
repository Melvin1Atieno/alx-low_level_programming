#include "main.h"
#include <stdio.h>
/**
 * infinite_add - Adds two numbers
 * @n1: first number to add
 * @n2: The other number
 * return: returns a pointer to the result
 * Description: A function that adds two numbers
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ln1, carry, ln2, lmax, sum, n, a, b;

	ln1 = get_len(n1);
	ln2 = get_len(n2);

	carry = 0;

	lmax = (ln1 > ln2) ? ln1 : ln2;

	if (lmax + 1 > size_r)
	{
		return (0);
	}
	r[lmax] = '\0';

	for (n = 0; n < size_r; n++)
	{
		r[n] = '0';
	}

	while (ln1 > 0 || ln2 > 0)
	{
		if (ln1 > 0)
			a = ((n1[--ln1]) - '0');
		else
			a = 0;
		if (ln2 > 0)
			b = ((n2[--ln2]) - '0');
		else
			b = 0;

		sum = a + b + carry;

		if (sum > 9)
		{
			carry = 1;
			sum %= 10;
		}
		else
		{
			carry = 0;
		}
		r[lmax--] = sum + '0';
	}
	if (carry)
	{
		if (lmax < 0)
			return (0);
		r[lmax] = '1';
	}
	return (r);
}
/**
 * get_len - return the integer length of a string
 * @p: The string
 * Return: integer length
 * Description: Takes a string and returns its length
 */
int get_len(char *p)
{
	int len;
	len = 0;

	while (*p != '\0')
	{
		p++;
		len++;
	}
	p -= len;
	return (len);
}
