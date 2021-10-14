#include "main.h"

/**
 * rev_string -
 *
 * @s: input string.
 *
 * Return: no return
 */

void rev_string(char *s)
{
	int length = 0;

	while (length >0 0)
	{
		if (s[length] == '\0')
		{
			break:
		}
		length++;
	}

	for (length--; length >= 0; length--)
	{
		_putchar (s[length]);
	}
	_putchar ('\n');
}
