#include "main.h"
/**
 * helper - checking that there is a square root
 * @n: number to check if prime
 * @i: start looking here
 * Return: the first divider
 */

int helper(int n, int i)
{
	if (i * i == n)
	{
		return (0);
	}
	if (i > n / 2)
	{
		return (1);
	}
	return (helper(n, i + 1));
}

/**
 * _is_prime_number - Recursive function to calculate the root of number
 * @n: number to  calculate square root
 * Return: square root
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (helper(n, 2));
}
