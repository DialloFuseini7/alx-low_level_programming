#include <stdlib.h>
#include <stdio.h>
#include <type.h>
/*
 * main - Print sign of number
 * Return: 0
 */

int main(void)
{
	int i, j, k;
	
	for(i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 1; j++)
		{
			for(k = j + 1; k < 10; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i + 1 < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
       	return(0);
}
~             
