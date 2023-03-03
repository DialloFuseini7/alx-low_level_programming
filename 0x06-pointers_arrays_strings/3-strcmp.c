#include "main.h"
/**
 * _strcmp - this function compares two strings
 * Return: an integer giving the gap between strings
 * @s1: first string
 * @s2: second string
 */
int _strcmp(char *s1, char *s2)
{
	int n, m;

	n = 0;
	m = 0;
	while (*(s1 + n) != '\0' && *(s2 + n) != '\0')
	{
		m = *(s1 + n) - *(s2 + n);
		if (m != 0)
		{
			break;
		}
		n++;
	}
	return (m);
}
