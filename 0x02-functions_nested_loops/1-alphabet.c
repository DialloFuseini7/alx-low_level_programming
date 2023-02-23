#include <stdio.h>
#include "main.h"
/**
 * main - prints alphabets
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
