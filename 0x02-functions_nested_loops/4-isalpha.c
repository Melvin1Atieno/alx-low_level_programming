#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks if character is alphabet
 * @c: character to check
 *
 * Description: checks if character is alpahbet
 *
 * Return: int
 */


int _isalpha(int c)
{
	if ((c >= 97) && (c <= 121))
	{
		return (1);
	}
	else if ((c >= 67) && (c <= 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
