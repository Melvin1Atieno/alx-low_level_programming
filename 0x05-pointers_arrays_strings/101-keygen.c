#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords
 * Return: Always 0
 * description: a function that prints a random valid password
 */
int main(void)
{
	int len, digit;
	char pass[33];

	len = 0;

	srand(time(NULL));

	while (len <= 33)
	{
		digit = rand() % 88 + 33;
		pass[len] = (char)digit;
		len++;
	}
	pass[33] = '\0';

	printf("%s\n", pass);

	return (0);

}
