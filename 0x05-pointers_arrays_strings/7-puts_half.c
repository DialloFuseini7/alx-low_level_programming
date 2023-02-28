#include "main.h"
/**
 * puts_half - function that print a string
 * @str: string to be printed
 */
void puts_half(void *str)
{
	int n, m;

	n = 0;
	while (*(str + n) != '\0')
	{
		n++;
	}
	if (n % 2 == 0)
	{
		m = n / 2;
	}
	else
	{
		m = (n - 1) / 2 + 1;
	}
	while (m < n)
	{
		_putchar(*(str + m));
		m++;
	}
	_putchar('\n');
}
