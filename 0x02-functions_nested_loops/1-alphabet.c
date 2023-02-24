#include <stdio.h>
#include "main.h"
/**
 *prints_alphabets - prints alphabets a -z
 * Return: always 0
 */
int print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
