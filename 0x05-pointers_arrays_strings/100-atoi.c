#include "main.h"
/**
 * _atoi - convert string to integer
 * @s: string to convert
 *
 * Return: int
 * Description: Converts string to integer. String -
 * can be preceded by an infinite no of char
 */

int _atoi(char *s)
{
	int res, sign;

	res = 0;
	sign = 1;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;

		}
		else if (*s <= '9' && *s >= '0')
		{
			res = res * 10 + (*s - '0');
		}
		s++;
	}
	res *= sign;
	return (res);

}
