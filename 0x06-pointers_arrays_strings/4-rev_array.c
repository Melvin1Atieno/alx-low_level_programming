#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: array to be reversed
 * @n: size of array to be reversed
 * Return: void
 * Description: reverses an array with n elements
 */
void reverse_array(int *a, int n)
{
	int start, temp;

	start = 0;
	n -= 1;

	while (start < n)
	{
		temp = a[start];
		a[start] = a[n];
		a[n] = temp;
		start++;
		n--;
	}
}
