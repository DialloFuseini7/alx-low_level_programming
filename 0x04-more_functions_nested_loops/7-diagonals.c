#include "main.h"
/**
 * print_diagonal - print a diagonal with a number of characters
 * @n: number of character to use
 */

void print_diagonal(int n)
{
	int i, d;
	
	for (i = 0; i < n; i++)
	{
		for (d = 0; d < i; d++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n = 0)
	{
		_putchar('\n');
	}
}
