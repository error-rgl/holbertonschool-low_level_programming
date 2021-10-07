#include "main.h"
/**
 * jack_bauer - Print every minute from 00:00 to 23:59.
 *
 * Return: void.
 */
void jack_bauer(void)
{
	int h, h1, h2, m, m1, m2;

	for (h = 0; h <= 23; h++)
	{
		h1 = h / 10;
		h2 = h % 10;
		for (m = 0; m <= 59; m++)
		{
			m1 = m / 10;
			m2 = m % 10;
			_putchar(h1 + 48);
			_putchar(h2 + 48);
			_putchar(':');
			_putchar(m1 + 48);
			_putchar(m2 + 48);
			_putchar('\n');
		}
	}
}
