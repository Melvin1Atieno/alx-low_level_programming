#include <stdio.h>

/**
 * main -  print the first 98 Fibonacci numbers
 *
 * Return: int
 * Description: prints the first 98 fibonacci numbers
 */

int main(void)
{
	unsigned int i, j, k;
	int count;

	i = 1;
	j = 2;
	count = 0;

	printf("%u, ", i);

	while (count < 98)
	{
		printf("%u, ", j);

		k = j;
		j = i + j;
		i = k;

		count++;
	}

	printf("%u\n", j);
	return (0);
}
