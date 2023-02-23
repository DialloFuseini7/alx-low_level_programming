#include "main.h"
/**
 * times_table - prints multiplication timestable
 */
void times_table(void)
{
	int i, m, p;
	for (i = 0; i < 10; i++)
	{
		for (m = 0; m < 10; m++)
		{
			p = i * m;
			if (p >= 10)
			{
				putchar((p / 10) + '0');
			}
			putchar((p % 10) + '0');
			if (m < 9)
			{
				if (i * (m + 1) >= 10)
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					putchar('.');
					putchar(' ');
					putchar(' ');
				}
			}
		}
		putchar('\n');
	}
}
