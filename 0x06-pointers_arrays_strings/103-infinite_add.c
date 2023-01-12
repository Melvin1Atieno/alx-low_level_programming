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
	int ln1, carry, ln2, lmax, sum, i, j;

	ln1 = get_len(n1);
	ln2 = get_len(n2);

	carry = 0;
	i = ln1 - 1;
	j = ln2 - 1;
	lmax = (ln1 > ln2) ? ln1 : ln2;

	if (lmax + 1 > size_r)
	{
		return (0);
	}
	r[lmax + 1] = '\0';

	while (i >= 0 || j >= 0)
	{
		if (i >= 0)
		{
			sum = n1[i] - '0';
		}
		else
		{
			sum = 0;
		}
		if (j >= 0)
		{
			sum += n2[j] - '0';
		}

		sum += carry;
		if (sum > 9)
		{
			carry = sum / 10;
			sum = sum % 10;
		}
		else
		{
			carry = 0;
		}
		r[lmax] = sum + '0';
		lmax--;
		i--;
		j--;
	}
	if (carry)
	{
		r[lmax--] = '1';
	}
	if ((get_len(r) + 1) > size_r)
	{
		return (0);
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
