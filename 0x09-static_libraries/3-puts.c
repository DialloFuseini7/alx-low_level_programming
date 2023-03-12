#include "main.h"
/**
 * _puts - function that print a string
 * @s: string to print
 */
void _puts(char *s)
{
	int n;

	n = 0;
	while (*(s + n) != '\0')
	{
		_putchar(*(s + n));
		n++
	}
	_putchar('\n');
}
