#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i;

	i = 0;
	do {
		putchar((i % 10) + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	} while (i <= 9);

	putchar('\n');
	return (0);
}
