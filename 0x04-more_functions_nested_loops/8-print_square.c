#include "main.h"

/**
 * print_square - Prints a square with a number of characters
 * @n : number of character to use
 */

void print_square(int n)
{
	int i, d;

	for (i = 0; i < n; i++)
	{
		for (d = 0; d < n; d++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (n = 0)
	{
		_putchar('\n');
	}
}
