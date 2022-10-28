#include <stdio.h>

/**
 * main -  print the first 50 Fibonacci numbers
 *
 * Return: int
 * Description: prints the first 50 fibonacci numbers
 */

int main(void)
{
	long int i, j, k;
	int count;

	i = 0;
	j = 1;
	count = 0;

	printf("%ld,", i);

	while (count < 50)
	{
		printf("%ld,", j);

		k = j;
		j = i + j;
		i = k;

		count++;
	}

	printf("%ld\n", j);
	return (0);
}
