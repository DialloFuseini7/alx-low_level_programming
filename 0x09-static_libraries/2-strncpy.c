#include "main.h"
#include <string.h>
/**
 * _strncpy - this function appends the src string to the dest string
 * Return: a pointer to the resulting string dest
 * @dest: string to be added to
 * @src : string to add
 * @n: number of characters to copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m;

	m = 0;
	while (*(src + m) != '\0' && m < n)
	{
		*(dest + m) = *(src + m);
		m++;
	}
	for ( ; m < n; m++)
	{
		*(dest + m) = '\0';
	}
	return (dest);
}
