#include "main.h"
/**
 * rot13 - encodes string using rot13
 * @s: string to encode
 * Return: rotated string
 * Description: rotates each character in a string 13 places
 */

char *rot13(char *s)
{
	int len, n;

	char org[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encoded[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	len = 0;

	while (*s != '\0')
	{
		for (n = 0; n < 53; n++)
		{
			if (*s == org[n])
			{
				*s = encoded[n];
				break;
			}
		}
		s++;
		len++;
	}
	s -= len;
	return (s);
}
