#include "main.h"
/**
* _isdigit - Returns 1 if c is a digit and 0 otherwise
* Return: boolean determining if character is a digit
* @c: character to test
*/
int _isdigit(int c)
{
	int i = 0;

	if (c >= 48 && c <= 57)
	{
		i = 1;
	}
	return (i);
}
