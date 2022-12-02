#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: string one of the two to compare
 * @s2: String two of the two to compare
 * Return: int
 * Description: Compares two strings and returns an int
 */
int _strcmp(char *s1, char *s2)
{
	int match;

	match = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			match++;
		}
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 != '\0')
	{
		match = -15;
	}
	if (*s2 == '\0' && *s1 != '\0')
	{
		match = 15;
	}
	return (match);
}
