#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
 */
void print_alphabet_x10(void)	
{
	int i = 1;

	int a;

	while (i <= 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			putchar(a);
		}
		i = i + 1;
		putchar('\n');
	}
}
