#include "main.h"
/**
 * _strlen_recursion - Recursive function to return a string's length
 * @s: string to find length of
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
