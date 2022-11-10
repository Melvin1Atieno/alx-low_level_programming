#include "main.h"
/**
 * puts_half - prints second half of the string
 * @str: string to print half of
 *
 * Return: void
 * Description: Prints out the second half of a string
 */

void puts_half(char *str)
{
	int len, start;

	len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str -= len;

	if ((len / 2) % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2;
	}

	start += 1

	while (*(str + start) != '\0')
	{
		_putchar(*(str + start));
		start++;

	}
	_putchar('\n');
}
