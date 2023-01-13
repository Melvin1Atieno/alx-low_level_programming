#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: The string
 * @accept: The substring
 * Return: pointer to byte in s that matches bytes in accept
 * description: locates the first occurence in s of any bytes in
 * accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int slen;

	slen = 0;

	while (*s !=  '\0')
	{
		while (*accept != '\0')
		{
			if (*accept == *s)
			{
				return (s);
			}
			accept++;
			slen++;
		}
		accept -= slen;
		slen = 0;
		s++;
	}
	return ((char *)0);
}
