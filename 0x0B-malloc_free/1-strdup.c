#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - allocaates a string to a pointer
 * Return: a pointer to the allocated memory
 * @str: sting to put
 */

char *_strdup(char *str)
{
	char *a;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	a = malloc(strlen(str) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(str); i++)
	{
		a[i] = str[i];
	}
	return (a);
}
