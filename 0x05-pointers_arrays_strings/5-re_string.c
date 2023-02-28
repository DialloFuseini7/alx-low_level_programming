#include "main.h"
/**
 * rev_string - function that reverse string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, n;
	char tmp;

	n = 0;
	while (*(n + s) != '\0')
	{
		n++;
	}
	for (i = 0; i < n / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + n -i -1);
		*(s + n - i - 1) = tmp;
	}
}
