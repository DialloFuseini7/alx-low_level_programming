#include "main.h"
/**
 * _memset - this function appends the src string to the dest string
 * Return: a pointer to the resulting string dest
 * @s: char where to copy
 * @b: char to copy
 * @n:n bytes where to copy src
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*(s + n - 1) = b;
		n--;
	}
	return (s);
}
