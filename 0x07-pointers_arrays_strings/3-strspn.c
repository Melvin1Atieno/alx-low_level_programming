#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string
 * @accept: The substring
 * Return: Number of bytes in s consisting of accept
 * description: Returns bytes in the initial segment of s
 * which costist of only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, slen, found;

	count = 0;
	slen = 0;
	found = 0;

	while (*s !=  '\0')
	{
		while (*accept != '\0')
		{
			if (*accept == *s)
			{
				count++;
				found = 1;
				break;
			}
			accept++;
			slen++;
		}
		if (found == 1)
		{
			accept -= slen;
			slen = 0;
			s++;
			found = 0;
		}
		else
		{
			return (count);
		}
	}
	return (count);
}
