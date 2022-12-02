#include "main.h"
/**
 * _strncat - Append src to dest with a max of n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: Max number of bytes from src
 * Return: Appended string
 * Description: function is similar to the _strcat function, except that
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, src_n;

	len = 0;
	src_n = 0;

	while (*dest != '\0')
	{
		dest++;
		len++;

	}
	while ((*src != '\0') && (src_n < n))
	{
		*dest = *src;
		src++;
		dest++;
		len++;
		src_n++;
	}
	dest -= len;
	return (dest);
}

