#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_to_98 - function outputs to 98 from input
 * @n: input integer
 */
void print_to_98(int n)
{
	int s = 0;

	do {
		printf("%i", n);
		if (n < 98)
		{
			n++;
			printf(", ");
		}
		else  if (n > 98)
		{ 
			n--;
			printf(", ");
		}
		else
		{
			s = 1;
		}
	}
	while (s != 1);
{
	printf("\n");
}
}
