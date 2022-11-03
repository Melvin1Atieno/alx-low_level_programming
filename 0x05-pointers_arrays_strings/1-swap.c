#include "main.h"
/**
 * swap_int - swaps two values
 * @a: First value to swap
 * @b: second value to swap
 *
 * Return: Always void
 *
 * Description: Swaps the value of two integers
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
