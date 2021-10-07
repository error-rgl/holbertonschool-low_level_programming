#include "main.h"
/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @digit: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int digit)
{
	int last;

	last = digit % 10;
	if (last < 0)
	{
		_putchar(-last + 48);
		return (-last);
	}
	else
	{
		_putchar(last + 48);
		return (last);
	}
}
