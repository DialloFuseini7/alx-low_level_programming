#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints _putcahr using putchar
 * @s: char character to contain _putchar
 * print_putchar: a declaration
 * Return: always (0)
 */
void print_putchar(char *s);
int main(void)
{
	char s[] = "_putchar";

	print_putchar(s);
	return (0);
}
void print_putchar(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');
}
