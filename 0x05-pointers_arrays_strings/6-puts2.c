#include "main.h"
/**
 * puts2 - function that prints a string
 * @str: string to be printed
 */
void puts2(char *str)
{
	int n;

	n = 0;
	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		if (*(str + n + 1) == '\0')
		{
			break;
		}
		n = n + 2;
	}
	_putchar('\n');
}
