#include <stdio.h>

/**
 * main -  prints the sum of the  even Fibonacci numbers
 *
 * Return: int
 * Description: Sum of even numbered fibonacci below 4000000
 */

int main(void)
{
	long int i, j, k, count;

	i = 1;
	j = 2;
	count = 0;

	while (j < 4000000)
	{
		if ((j % 2) == 0)
		{
			count += j;

		}
		k = j;
		j = i + j;
		i = k;

	}

	printf("%ld\n", count);
	return (0);
}
