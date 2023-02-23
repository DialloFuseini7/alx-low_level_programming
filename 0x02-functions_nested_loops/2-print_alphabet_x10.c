#include <stdio.h>
#include "main.h"
/**
 * main -prints alphabets 10 times
 * Return: always 0
 */
void print_alphabet(void)	
	int main(void)
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
		putchar('\n')
	}
	return (0);
}
