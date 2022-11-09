#include "main.h"
/**
 * _strlen - returns length of string
 * @s: String whose length we return
 *
 * Return: int
 *
 * Description: Function that returns string length
 */

int _strlen(char *s)
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
