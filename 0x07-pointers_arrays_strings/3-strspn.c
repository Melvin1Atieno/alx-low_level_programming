#include "main.h"
#include <stdio.h>
/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string
 * @accept: The substring
 * Returns: Number of bytes in s consisting of accept
 * Description: Returns bytes in the initial segment of s
 * which costist of only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, slen;

	count = 0;
	slen = 0;

	while (*accept !=  '\0')
	{
		while (*s != '\0')
		{
			if (*accept == *s)
			{
				count++;
				s -= slen;
				break;
			}
			s++;
			slen++;
		}
		slen = 0;
		accept++;
	}
	if (*accept == '\0')
	{
		count++;
	}
	return (count);
}
