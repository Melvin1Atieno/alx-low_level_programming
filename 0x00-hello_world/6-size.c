#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 *
 */
int main(void)
{
	int c, i, li, lli, f;

	c = (unsigned int) sizeof(char);
	i = (unsigned int) sizeof(int);
	li = (unsigned int) sizeof(long int);
	lli = (unsigned int) sizeof(long long int);
	f = (unsigned int) sizeof(float);

	printf("Size of a char: %d byte(s)\n", c);
	printf("Size of an int: %d byte(s)\n", i);
	printf("Size of a long int: %d byte(s)\n", li);
	printf("Size of a long long int: %d byte(s)\n", lli);
	printf("Size of a float: %d byte(s)\n", f);
	return (0);
}
