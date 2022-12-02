#include "main.h"
/**
 * cap_string - Capitalize all words in a string
 * @str: string to capitalize
 * Return: capitalized string
 * Description: Capitalize the words in a string
 */
char *cap_string(char *str)
{
	int len, i;
	int a[] = {33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	len = 0;

	while (*str != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if ((int)*str == a[i] || *str == '\n' || *str == '\t' || *str == ' ')
			{
				str++;
				len++;

				if (*str >= 97 && *str <= 122)
				{
					*str = (char)((int) *str - 32);
				}
			}
		}
		str++;
		len++;
	}

	str -= len;
	return (str);
}
