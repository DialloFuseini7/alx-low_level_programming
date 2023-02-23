#include "main.h"
/**
 * jack_bauer - function that prints each minute of the day
 */
void jack_bauer(void)
{
	int c, k;

	for (c = 0; c < 24; c++)
	{
		for (k = 0; k < 60; k++)
		{
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			_putchar(':');
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar('\n');
		}
	}
}
