#include "main.h"
/**
 * print_triangle - Print a triangle with a number of characters
 * @size: number of character to use
 */

void print_triangle(int size)
{
	int i, d;

	for (i = 0; i < size; i++)
	{
		for (d = 0; d < size - i - 1; d++)
		{
			_putchar(' ');
		}
		for (d = size - i - 1; d < size; d++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
