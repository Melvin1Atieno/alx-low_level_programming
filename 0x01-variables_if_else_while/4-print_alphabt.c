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

	c = 'a';
	end = 'z';

	while (c <= end)
	{
		if ((c != 'q') && (c != 'e'))
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
