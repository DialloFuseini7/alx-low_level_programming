#include "main.h"
/**
 * _isalpha - returns 1 if c is a lowcase and 0 if not
 * Return: boolean checks if lowercase or uppercase
 * @c: character to check
 */
int _isalpha(int c)
{
	int r = 0;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		r = 1;
	}
	return (r);
}
