#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: The string
 * @c: The character to find
 * Return: Pointer to character occurence
 * Description: Finds and returns the first occurence of
 * a character in a string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ((char *)0);
}
