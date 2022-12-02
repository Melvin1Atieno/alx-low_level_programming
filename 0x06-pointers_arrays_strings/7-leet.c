#include "main.h"
/**
 * leet - encodes string into 1337/leet
 * @str: String to encode
 * Return: encoded string
 * Description: Encodes string into leet
 */
char *leet(char *str)
{
	int i, len;
	char cap[] = {'A', 'E', 'O', 'T', 'L'};
	char low[] = {'a', 'e', 'o', 't', 'l'};
	char rep[] = {'4', '3', '0', '7', '1'};

	len = 0;

	while (*str != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == cap[i] || *str == low[i])
			{
				*str = rep[i];
			}
		}
		str++;
		len++;
	}
	str -= len;
	return (str);
}
