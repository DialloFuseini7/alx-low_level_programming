#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 */

void more_numbers(void)
{
	int i, a, b;
		
		for (i = 0; i <= 10; i++)
		{
			for (a = 0; a <= 14; a++)
			{
				b = i;

				if ( a > 9)
				{
					_putchar('1');
					b -= 10;
				}
				_putchar(b + 48);
			}
			_putchar('\n');
		}
}
