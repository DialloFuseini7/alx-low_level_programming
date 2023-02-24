#include "main.h"
/**
 * print_line - print a line with a number of characters
 * @n: number of lines to use
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
