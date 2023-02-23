#include "main.h"
/**
 * jack_bauer - function that prints each minute of the day
 */
void jack_bauer(void)
{
	int c, k;

	while (c = 0; c < 24; c++)
	{
		for (k = 0; k < 60; k++)
		{
			putchar((c / 10) + '0');
			putchar((c % 10) + '0');
			putchar(':');
			putchar((k / 10) + '0');
			putchar((k % 10) + '0');
			putchar('\n');
		}
	}
}
