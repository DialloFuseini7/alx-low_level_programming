#include "main.h"
/**
 * _isupper - Returns 1 if c is a lowercase and 0 if c is uppercase
 * Return: boolean determining if character is lowercase
 * @c: character to be tested
 */

int _isupper(int c)
{
	int i = 0;

	if (c >= 'a' && c <= 'z')
	{
		i = 1;
	}
	return (i);
}
