#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 * Description: Prints from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int h;
	int m;

	h = 0;

	while (h < 24)
	{
		m = 0;

		while (m < 60)
		{
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar(':');
			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
			_putchar('\n');
			m++;
		}
		h++;
	}
}
