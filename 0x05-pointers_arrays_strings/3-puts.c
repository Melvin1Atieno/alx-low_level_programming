#include "main.h"
/**
 * _puts - printds string
 * @str: Ponter to string address
 *
 * Return: void
 * Description: prints string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;

	}
	_putchar('\n');
}
