#include <stdio.h>
/**
 * main - prints out the Fizz Buzz test
 *
 * Return: void
 *
 * Description: Prints out FizzBuzz
 */

int main(void)
{
	int i;

	i = 1;
	while (i < 100)
	{
		if (((i % 3) == 0) && ((i % 5) != 0))
		{
			printf("Fizz ");

		}
		else if (((i % 5) == 0) && ((i % 3) != 0))
		{
			printf("Buzz ");
		}
		else if (((i % 5) == 0) && ((i % 3) == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("Buzz\n");
	return (0);
}
