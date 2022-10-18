#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 *
 */
int main(void)
{
	char c, end, c2, end2;

	c = 'a';
	end = 'z';
	c2 = 'A';
	end2 = 'Z';

	while (c <= end)
	{
		putchar(c);
		c++;
	}

	while (c2 <= end2)
	{
		putchar(c2);
		c2++;
	}
	putchar('\n');
	return (0);
}
