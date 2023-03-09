#include "main.h"
/**
 * factorial - Recursive function to calculate factorial of a number
 * @n: number to return the factorial of
 * Return: factorial
 */

int factorial(int n);
{
	if (n < 0)
	{
		return (-1);
	}
	if ( n > 0)
	{
		return ( n * factorial(n - 1));
	}
	return (1);
}
