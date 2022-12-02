#include "main.h"
/**
 * _strncpy - copies src to destination with a max of n from src
 * @src: source string
 * @dest: destination string
 * @n: max charcters in src to be copied
 * Return: copied string
 * Description: Copies n characters from scr to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len, max_src;

	len = 0;
	max_src = 0;

	while (*src != '\0' && max_src < n)
	{
		*dest = *src;
		dest++;
		src++;
		max_src++;
		len++;
	}
	while (len < n)
	{
		*dest = '\0';
		len++;
		dest++;
	}

	dest -= len;
	return (dest);
}
