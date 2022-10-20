#include <stdio.h>
#include "main.h"
/**
 * _islower - checks if character is lower case
 * @c: The characterto check
 *
 * Description: checks if character is lowercase
 *
 * Return: int
 */


int _islower(int c)
{
	int islower, notlower;

	islower = 1;
	notlower = 0;

	if ((c >= 97) && (c <= 121))
	{
		return (islower);
	}
	else
	{
		return (notlower);
	}

}
