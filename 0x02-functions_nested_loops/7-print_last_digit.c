#include "main.h"
/**
 * print_last_digit - function that prints the last digit
 * Return: the last digit
 * @n: integer to be checked
 */
int print_last_digit(int n)
{
	int c;

	c = n % 10;
	if (c < 0)
	{
		c = -c;
	}
	putchar (c + '0');
	return (c);
}
