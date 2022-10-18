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
	char c;

	i = 0;
	c = 'a';

	while (i < 10)
	{
		putchar((i % 10) + '0');
		i++;
	}
	while (c < 'g')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
