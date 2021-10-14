#include "main.h"

/**
 * print_rev -
 *
 * @s: input string.
 *
 * Return: no return.
 */

void print_rev(char *s)
{
	int length = 0;

	while (length >= 0)
	{
		if (s[length] == '\n')
			break;
		length++;
	}

	for (length--; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
