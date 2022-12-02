#include "main.h"
/**
 * string_toupper - converts lowercase letter in string to uppercse
 * @str: string to convert to uppercse
 * Return: Converted string
 * Description: converts string to uppercase
 */
char *string_toupper(char *str)
{
	int len;

	len = 0;

	while (*str != '\0')
	{
		if ((int)*str >= 97 && (int)*str <= 122)
		{
			*str = (char)((int)*str - 32);
		}
		str++;
		len++;
	}
	str -= len;
	return (str);
}
