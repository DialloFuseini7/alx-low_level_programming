#include "main.h"
/**
 * print_sign - function that prints sign of number
 * Return: the sign of the integer
 * @n: integer to be tested
 */
int print_sign(int n)
{
	int c;

	if (n > 0)
	{
		c = 1;
		putchar('+');
	}
	else if (n < 0)
	{
		c = -1;
		putchar('-');
	}
	else 
	{
		c = 0;
		putchar('0');
	}
	return (c);
}
