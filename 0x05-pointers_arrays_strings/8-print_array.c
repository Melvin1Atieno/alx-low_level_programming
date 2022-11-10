#include <stdio.h>
#include "main.h"
/**
 * print_array - print n elements in an array
 * @a: the array
 * @n: number of elements to be printed
 *
 * Return: void
 * Description: Print n number of elements in an array seperated by comma
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	n -= 1;

	while (i <= n)
	{
		if (i == n)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
		i++;
	}
	printf("\n");
}
