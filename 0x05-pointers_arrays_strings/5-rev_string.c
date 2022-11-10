#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string to reverse
 *
 * Return: void
 * Description: Function to reverse string
 */

void rev_string(char *s)
{
	int len;
	char *end;

	char temp;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	end = (s + (len - 1));

	while (s < end)
	{
		temp = *s;
		*s = *end;
		*end = temp;
		s++;
		end--;
	}
}
