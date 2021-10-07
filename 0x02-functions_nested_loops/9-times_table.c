#include "main.h"
/**
 * times_table - prints the 9 times table,
 * starting with 0.
 *
 * Return: void.
 */
void times_table(void)
{
	int number, column, row, tens, ones;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			number = row * column;
			tens = number / 10;
			ones = number % 10;
			if (column == 0)
				_putchar(number + 48);
			else if (number < 10)
			{
				_putchar(32);
				_putchar(32);
				_putchar(number + 48);
			}
			else
			{
				_putchar(32);
				_putchar(tens + 48);
				_putchar(ones + 48);
			}
			if (column != 9)
				_putchar(44);
		}
		_putchar('\n');
	}
}
