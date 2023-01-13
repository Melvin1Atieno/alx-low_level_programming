#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: size of memory to copy
 * Return: pointer to dest
 * Description: Copies n bytes from src to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	count = 0;

	while (count < n)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	return (dest);
}
