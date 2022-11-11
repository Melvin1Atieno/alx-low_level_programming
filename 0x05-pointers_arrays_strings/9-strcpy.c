#include "main.h"
/**
 * _strcpy - copies string
 * @dest: destination
 * @src: source
 *
 * Return: pointer to destinatio
 * Description: Copies the sctring pointed to src including \0 to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len;

	len = 0;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		len++;
	}
	*dest = '\0';
	dest -= len;
	return (dest);
}
