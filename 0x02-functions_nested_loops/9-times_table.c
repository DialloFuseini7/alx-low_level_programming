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
				_putchar((p / 10) + '0');
			}
			_putchar((p % 10) + '0');
			if (m < 9)
			{
				if (i * (m + 1) >= 10)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar('.');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
