#include <stdio.h>

/**
 * main - prints the prime factor of numbers
 *
 * Return: int
 *
 * Description: Prints the prime factors of number 612852475143
 */

int main(void)
{
	unsigned long num, prime, j;

	num = 612852475143;
	prime = 2;

	while (num > prime)
	{
		if ((prime > 3) && (num % prime >= 1))
		{
			for (j = prime; j < num; j++)
			{
				if ((j % 2 >= 1) && (j % 3 >= 1) && (num % j == 0))
				{
					prime = j;
					break;
				}
			}
			if ((num % 2 >= 1) && (num % 3 >= 1))
			{
				prime = num / prime;
				break;
			}
		}
		else if ((prime == 2) && (num % prime >= 1))
		{
			prime++;
		}
		else if ((prime == 3) && (num % prime >= 1))
		{
			prime++;
		}
		if (num % prime == 0)
		{
			num = num / prime;
		}
	}
	printf("%lu\n", num);
	return (0);
}
