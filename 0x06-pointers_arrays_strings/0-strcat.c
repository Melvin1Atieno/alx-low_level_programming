#include "main.h"
/**
 * *_strcat - appends the src string to dest string
 * @dest: destination string
 * @src: source string
 * Return: Appeded string
 * Description: Function appends src to dest overwriting the null byte
 */
char *_strcat(char *dest, char *src)
{
	int len;

	len = 0;

	while (*dest != '\0')
	{
		dest++;
		len++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		len++;
	}

	dest -= len;
	return (dest);
}
