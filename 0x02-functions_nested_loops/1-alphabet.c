#include <stdio.h>
#include "main.h"
/**
 *print_alphabet - prints alphabets a - z
 * Return: always 0
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
