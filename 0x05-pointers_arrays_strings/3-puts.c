#include "main.h"
/**
 * _puts - function that prints a string
 * @str: string to be printed
 */
void _puts(char *str)
{
	int n;

	n = 0;
	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
