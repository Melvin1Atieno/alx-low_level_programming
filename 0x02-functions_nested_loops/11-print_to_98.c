#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print from number to 98
 * @n: the number from which the printing begins
 *
 * Return: void
 *
 * description: Prints from number to 98
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		else
		{
			printf("%d, ", n);
			n++;
		}
	}
	printf("98\n");
}
