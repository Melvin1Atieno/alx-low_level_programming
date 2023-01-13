#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: The memory
 * @b: The constant
 * @n: The number of bytes in s to fill
 * Return: Pointer to s
 * Description: Fills the first n bytes of the
 * memory area pointed by s with constant byte b
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	count = 0;

	while (count < n)
	{
		*s = b;
		s++;
		count++;
	}

	s -= count;

	return (s);
}
