#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 *
 */
int main(void)
{
	char c, end;

	c = 'z';
	end = 'a';

	while (c >= end)
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
