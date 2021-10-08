#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 *
 * Return: void.
 */

void more_numbers(void)
{
	int i, k;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k >= 10)
				_putchar('0' + (k / 10));
			_putchar('0' + (n % 10));
		}
		_putchar('\n');
	}
}
