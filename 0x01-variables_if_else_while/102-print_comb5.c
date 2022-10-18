#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = 1; j <= 99; j++)
		{
			if ((i < j) && (i != j))
			{
				if ((i / 10) < 1)
				{
					putchar('0');
					putchar((i % 10) + '0');
				}
				else
				{
					putchar(((i / 10) % 10) + '0');
					putchar((i % 10) + '0');
				}
				putchar(' ');

				if ((j / 10) < 1)
				{
					putchar('0');
					putchar((j % 10) + '0');
				}
				else
				{
					putchar(((j / 10) % 10) + '0');
					putchar(((j % 10) % 10) + '0');
				}
				if ((i + j) < 197)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
