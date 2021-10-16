#include "main.h"

/**
 * print_number - Prints an integer using _putchar function
 * @n: Integer to print
 * Return: void
 */

void print_number(int n)
{
	int power10 = 1, digit;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	while (power10 * 10 <= n)
		power10 *= 10;
	while (power10 > 0)
	{
		digit = (n / power10) % 10;
		power10 /= 10;
		_putchar('0' + digit);
	}
}
