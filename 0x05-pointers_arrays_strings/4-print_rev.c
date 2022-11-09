#include "main.h"
/**
 * print_rev - reverse string
 * @s: adress of string to reverse
 *
 * return: void
 *
 * description: prints string in reverse
 */

void print_rev(char *s)
{
	int str_len;

	str_len =  get_len(s);

	while (str_len >= 0)
	{
		_putchar(*(s + str_len));
		str_len--;
	}
	_putchar('\n');
}
/**
 * get_len - counts characters in string
 * @s: string to count
 *
 * Return: int
 * Description: returns length of string
 */

int get_len(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
