#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creates array of chars,initilizes a specific char
 * Return: a pointer to the resulting array
 * @size: array size
 * @c: char to initialize with
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
