#include <stdlib.h>
#include <stdio.h>
#include <type.h>
/**
* main - Print sign of number
* Return: 0
*/
int main(void)
{
	int i, p, l;

	for (i = 0; i < 10; i++)
	{
		for (p = i + 1; p < 1; p++)
		{
			for (l = p + 1; l < 10; l++)
			{
				putchar('0' + i);
				putchar('0' + p);
				putchar('0' + l);
				if (i + 1 < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
       	return (0);
}
