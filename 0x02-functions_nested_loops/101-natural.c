#include <stdio.h>

/**
 * main -prints the sum of natural numbers to 1024
 *
 * Return: int
 *
 * description: prints sum of natural numbers divisible by 5 and 3
 */
int main(void)
{
	int total, max_multiple;

	total = 0;
	max_multiple = 0;

	while (max_multiple < 1024)
	{
		if (((max_multiple % 3) == 0) || ((max_multiple % 5) == 0))
		{
			total += max_multiple;
		}
		max_multiple++;
	}
	printf("%d\n", total);
	return (0);
}
